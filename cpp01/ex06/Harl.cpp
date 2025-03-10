/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:20:15 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/01 09:29:14 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug(void) {
	std::cout	<< "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger\
. I really do!\n"
				<< std::endl;
}

void	Harl::_info(void) {
	std::cout	<< "I cannot believe adding extra bacon \
costs more money. You didn't put enough bacon in my burger\
! If you did, I wouldn't be asking for more!\n"
				<< std::endl;
}

void	Harl::_warning(void) {
	std::cout	<< "I think I deserve to have some extra \
bacon for free. I've been coming for years whereas you \
started working here since last month.\n"
				<< std::endl;
}

void	Harl::_error(void) {
	std::cout	<< "This is unacceptable! I want to \
speak to the manager now.\n"
				<< std::endl;
}

void	Harl::complain(std::string level) {
	void (Harl::*ptr[4]) (void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = -1;
	while (++i < 4) {
		if (!level.compare(str[i]))
			break;
	}
	switch (i)
	{
		case 0:
			std::cout	<< "[ " << str[0] << " ]"
						<< std::endl;
			(this->*ptr[0]) ();
		case 1:
			std::cout	<< "[ " << str[1] << " ]"
						<< std::endl;
			(this->*ptr[1]) ();
		case 2:
			std::cout	<< "[ " << str[2] << " ]"
						<< std::endl;
			(this->*ptr[2]) ();
		case 3:
			std::cout	<< "[ " << str[3] << " ]"
						<< std::endl;
			(this->*ptr[3]) ();
			break;
		default:
			std::cout	<< "[ Probably complaining about insignificant problems ]"
						<< std::endl;
			break;
	}
}
