/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:39:20 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/29 16:21:46 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class	PhoneBook{
		private:
	int		_num_contact;
	Contact _contact[8];

		public:
	int		addContact(void);
	void	indexContact(void);
	int		listAllContact(void);
	int		searchingContact(void);
};

#endif