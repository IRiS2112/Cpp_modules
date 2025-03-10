/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:31:17 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 19:17:51 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug(void) {
	std::cout	<< "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger\
. I really do!"
				<< std::endl;
}

void	Harl::_info(void) {
	std::cout	<< "I cannot believe adding extra bacon \
costs more money. You didn't put enough bacon in my burger\
! If you did, I wouldn't be asking for more!"
				<< std::endl;
}

void	Harl::_warning(void) {
	std::cout	<< "I think I deserve to have some extra bacon for \
free. I've been coming for years whereas you started working here \
since last month."
				<< std::endl;
}

void	Harl::_error(void) {
	std::cout	<< "This is unacceptable! I want to \
speak to the manager now."
				<< std::endl;
}

void	Harl::complain(std::string level) {
	void	(Harl::*ptr[4]) (void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		i = -1;
	while (++i < 4) {
		if (!level.compare(str[i]))
			break;
	}
	if (i != 4)
		(this->*ptr[i]) ();
}
