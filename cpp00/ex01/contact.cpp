/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:31:51 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/30 15:04:45 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int	Contact::setContact() {
	std::string wanted;
	while (wanted.empty()) {
		std::cout << "First name:\t";
		if (!std::getline(std::cin, wanted))
			return (-1);
	}
	_first_name = wanted;
	
	wanted.clear();
	while (wanted.empty()) {
		std::cout << "Last name:\t";
		if (!std::getline(std::cin, wanted))
			return (-1);
	}
	_last_name = wanted;

	wanted.clear();
	while (wanted.empty()) {
		std::cout << "Nickname:\t";
		if (!std::getline(std::cin, wanted))
			return (-1);
	}
	_nickname = wanted;

	wanted.clear();
	while (wanted.empty()) {
		std::cout << "Phone number:\t";
		if (!std::getline(std::cin, wanted))
			return (-1);
	}
	_phone_number = wanted;

	wanted.clear();
	while (wanted.empty()) {
		std::cout << "Darkest secret:\t";
		if (!std::getline(std::cin, wanted))
			return (-1);
	}
	_darkest_secret = wanted;
	return (0);
}

void	Contact::setIndex(int index) {
	_index = index;
}

void	Contact::listContact() {
	putIndex();
	std::cout << "|";
	putStr10(_first_name);
	std::cout << "|";
	putStr10(_last_name);
	std::cout << "|";
	putStr10(_nickname);
	std::cout << std::endl;
}

void	Contact::putIndex() {
	std::cout << std::setw (10) << _index;
}

void	Contact::putStr10(std::string value) {
	if (value.length() < 10)
		std::cout << std::setw (10) << value;
	else {
		value.at(9) = '.';
		int	i = -1;
		while (value[++i] && i <= 9)
			std::cout << value[i];
	}
}

int	Contact::ifIscontact(int	wanted_index) {
	if (_index == wanted_index) {
		std::cout	<< "First name:\t" << _first_name << std::endl
					<< "Last name:\t" << _last_name << std::endl
					<< "Nickname:\t" << _nickname << std::endl
					<< "Phone number:\t" << _phone_number << std::endl
					<< "Darkest secret:\t" << _darkest_secret << std::endl;
		return (0);
	}
	return (-1);
}