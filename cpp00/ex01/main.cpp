/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:51:31 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/29 16:22:03 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"

int	main()
{
	PhoneBook	phone_book;
	std::string	wanted;

	while (wanted != "EXIT") {
		std::cout << "\n\t\t\tPHONEBOOK:\n\t* ADD.\n\t* SEARCH.\n\t* EXIT.\n";
		std::cout << "\n -> ";
		if (!std::getline(std::cin, wanted))
			break ;

		if (!wanted.compare("ADD")) {
			std::cout << "\n\t\t\tADD:\n";
			if (phone_book.addContact() == -1)
				break ;
			phone_book.indexContact();
			std::cout << "\n\tContact was added.\n";
		}

		else if (!wanted.compare("SEARCH")) {
			std::cout << "\n\t\t\tSEARCH:\n";
			if (phone_book.listAllContact() == -1) {
				std::cout << "\n\tThere is no contact.\n";
				continue ;
			}
			switch (phone_book.searchingContact())
			{
				case -1:
					return (std::cout << "\n\t\t\tEXIT!\n", 0);
				case -2:
					std::cout << "\tContact not found.\n";
			}
		}
	}
	return (std::cout << "\n\t\t\tEXIT!\n", 0);
}
