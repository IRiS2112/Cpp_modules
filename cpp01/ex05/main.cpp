/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:30:30 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 19:25:21 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	Harl		harl;
	std::string	level;

	if (!std::getline(std::cin, level))
		return (-1);

	harl.complain(level);

	return (0);
}
