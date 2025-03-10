/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:06:57 by hakaraou          #+#    #+#             */
/*   Updated: 2025/02/09 16:14:22 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &bitcoinExchange) {
	(void)bitcoinExchange;
}

BitcoinExchange::~BitcoinExchange() {
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &bitcoinExchange) {
	(void)bitcoinExchange;
	return (*this);
}

BitcoinExchange::Error::Error(const char *error) : _error(error) {
};

const char	*BitcoinExchange::Error::what() const throw() {
	return (_error);
}

void	BitcoinExchange::_readData() {
	std::ifstream file("data.csv");
	if (!file.is_open())
		throw Error("\033[1;31mError: Could not open the file 'data.csv'\033[0m");

    std::string 		line;
	std::string 		date;
	float				exchange_rate;
	std::getline(file, line);
    while (std::getline(file, line)) {
		date = line.substr(0, COMMAPOS);
		std::stringstream src(line.substr(COMMAPOS + 1));
		src >> exchange_rate;
		_data[date] = exchange_rate;
    }
	return ;
}

void	BitcoinExchange::_printError(const std::string &error) const {
	std::cerr	<< "Error: bad input => " << error
				<< std::endl;
}

bool	BitcoinExchange::_checkFormatLine() const {
	if (_line.size() < 14 || _line[4] != '-' || _line[7] != '-'
		|| _line[10] != ' ' || _line[11] != '|' || _line[12] != ' ')
		return (_printError(_line), true);
	return (false);		
}

bool	BitcoinExchange::_YearInput() const {
	return (_year < 0);
}

bool	BitcoinExchange::_MonthInput() const {
	return (_month < 1 || _month > 12);
}

bool BitcoinExchange::_isLeapYear() const {
	return ((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0); 
}

bool	BitcoinExchange::_DayInput() const {
	return (_day < 1
		|| (_month == 2 && ((!_isLeapYear() && _day > 28)
		|| (_isLeapYear() && _day > 29)))
		|| (_month < 8 && _month % 2 == 0 && _day > 30)
		|| (_month > 7 && _month % 2 == 1 && _day > 30));
}

bool	BitcoinExchange::_isDigit(const std::string &str) const {
	for (size_t i = 0; i < str.size(); i++) {
		if (!std::isdigit(str[i]))
			return (true);
	}
	return (false);
}

bool	BitcoinExchange::_checkDateInput() {
	_date = _line.substr(0, PIPEPOS - 1);;
	if (_date.size() < 10 || _date[4] != '-' || _date[7] != '-')
		return (_printError(_date), true);

	size_t dashPos = 4;
	std::string	year = _date.substr(0, dashPos);
	std::string	month = _date.substr(dashPos + 1, 2);
	dashPos = 7;
	std::string	day = _date.substr(dashPos + 1, 2);

	if (_isDigit(year) || _isDigit(month) || _isDigit(day))
		return (_printError(_date), true);

	std::stringstream yy(year);
	std::stringstream mm(month);
	std::stringstream dd(day);

	if (!(yy >> _year) || !(mm >> _month) || !(dd >> _day)
		|| _YearInput() || _MonthInput() || _DayInput())
		return (_printError(_date), true);

	return (false);
}

bool	BitcoinExchange::_checkValueInput() {
	std::string fnum = _line.substr(PIPEPOS + 2);
	
	std::stringstream src(fnum);
	if (!(src >> _value))
		return (_printError(_line), true);

	if (_value < 0) {
		std::cerr << "Error: not a positive number.\n";
		return (1);
	}
	if (_value > 1000) {
		std::cerr << "Error: too large a number.\n";
		return (1);
	}

	int i = 0;
	if (fnum[i] == '+')
		i++;
	while (fnum[i] && std::isdigit(fnum[i]))
		i++;
	if (fnum[i] && fnum[i] != '.')
		return (_printError(_line), true);
	if (fnum[i++] == '.')
		while (fnum[i] && std::isdigit(fnum[i]))
			i++;
	if (fnum[i])
		return (_printError(_line), true);

	return (false);
}

void	BitcoinExchange::_printOut(float exchange_rate) {
	_found = true;
	std::cout	<< _date << " => " << _value
				<< " = " << (_value * exchange_rate)
				<< std::endl;
}

void	BitcoinExchange::_doOperat() {
	std::map<std::string, float>::iterator	it;
	it = _data.begin();
	_found = false;

	if (_date < it->first) {
		_found = true;
		_printError(_date);
	}
	for (it = _data.begin(); it != _data.end() && !_found; it++) {
		if (_date == it->first)
			_printOut(it->second);
	}
	for (it = _data.begin(); it != _data.end() && !_found; it++) {
		if (_date < it->first && it != _data.begin()) {
			it--;
			_printOut(it->second);
			it++;
		}
	}
	if (!_found) {
		it--;
		_printOut(it->second);
	}

	return ;
}

void	BitcoinExchange::_readInput(const char *arg) {
	std::ifstream	file(arg);

	if (!file.is_open())
		throw Error("\033[1;31mError: Could not open the input file\033[0m");

	std::getline(file, _line);
	if (_line != "date | value")
		throw Error("\033[1;31mError: invalid form\033[0m");

    while (std::getline(file, _line)) {
		if (_checkFormatLine() || _checkDateInput() || _checkValueInput())
			continue;

		_doOperat();
    }
	return ;
}

void BitcoinExchange::btc(const char *arg) {
	BitcoinExchange btc;
	btc._readData();
	btc._readInput(arg);
}