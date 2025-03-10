/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:07:00 by hakaraou          #+#    #+#             */
/*   Updated: 2025/02/09 16:14:57 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <fstream>
# include <sstream>
# include <iostream>
# include <exception>

# define RESET   	"\033[0m"
# define RED		"\033[1;31m"
# define PIPEPOS 	11
# define COMMAPOS 	10

class	BitcoinExchange {
		public:
	static void btc(const char *arg);

	class	Error : public std::exception {
			public:
		Error(const char *error);

		const char	*what() const throw();

			private:
		const char	*_error;
	};

		private:
	int								_day;
	int			 					_year;
	int								_month;
	bool							_found;
	float							_value;
	std::string						_date;
	std::string						_line;
	std::map<std::string, float>	_data;

	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &bitcoinExchange);
	~BitcoinExchange();

	BitcoinExchange	&operator=(const BitcoinExchange &bitcoinExchange);

	void	_readData();
	void	_printError(const std::string &error) const ;
	bool	_checkFormatLine() const ;
	bool	_YearInput() const ;
	bool	_MonthInput() const ;
	bool	_isLeapYear() const ;
	bool	_DayInput() const ;
	bool	_isDigit(const std::string &str) const ;
	bool	_checkDateInput();
	bool	_checkValueInput();
	void	_printOut(float exchange_rate);
	void	_doOperat();
	void	_readInput(const char *arg);
};

#endif