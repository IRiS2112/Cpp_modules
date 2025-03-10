/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:11:46 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 17:00:43 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weaponA(weapon) {
}

HumanA::~HumanA() {
}

void	HumanA::attack() {
	std::cout	<< _name << " attacks with their " << _weaponA.getType()
				<< std::endl;
}
