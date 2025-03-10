/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:50:03 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/30 11:31:29 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class	Contact {
		private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

	int			_index;

	void		putIndex(void);
	void		putStr10(std::string value);

		public:
	int			setContact(void);
	void		setIndex(int index);
	void		listContact(void);
	int			ifIscontact(int wanted_index);
};

#endif