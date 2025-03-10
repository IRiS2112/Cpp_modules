/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:59:38 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/30 12:27:17 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int	PhoneBook::addContact() {
	for (int i = 7; i > 0; i--)
		_contact[i] = _contact[i - 1];
	if (_contact[0].setContact() == -1)
		return (-1);
	if (_num_contact < 8)
		_num_contact++;
	return (0);
}

void	PhoneBook::indexContact() {
	int	index = _num_contact;
	for (int i = 0; i < _num_contact; i++)
		_contact[i].setIndex(index--);
}

int	PhoneBook::listAllContact() {
	if (_num_contact == 0)
		return (-1);
	for (int i = _num_contact - 1; i >= 0; i--)
		_contact[i].listContact();
	return (0);
}

int	PhoneBook::searchingContact() {
	std::string	index;
	std::cout << std::endl;
	while(!(index.length() == 1 && index[0] > '0' && index[0] < '9')) {
		std::cout << " * Contact: ";
		if (!std::getline(std::cin, index))
			return (-1);
	}
	std::cout << std::endl;
	int	wanted_index;
	std::stringstream(index) >> wanted_index;
	for (int i = 0;  i < _num_contact; i++) {
		if (_contact[i].ifIscontact(wanted_index) == 0)
			return (0);
	}
	return (-2);
}