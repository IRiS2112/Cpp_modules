/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:06:42 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 15:52:02 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("default_name") {
}

Zombie::Zombie(std::string name) : _name(name) {
}

Zombie::~Zombie() {
	std::cout	<< _name << " is now dead, it's not gonna come back again."
				<< std::endl;
}

void	Zombie::announce(void) {
	std::cout	<< _name << ": BraiiiiiiinnnzzzZ..."
				<< std::endl;
}
