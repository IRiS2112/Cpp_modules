/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:20:09 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 19:25:16 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout	<< "[ Probably complaining about insignificant problems ]"
					<< std::endl;
		return (0);
	}

	Harl		harl;
	std::string	level = av[1];

	harl.complain(level);

	return (0);
}