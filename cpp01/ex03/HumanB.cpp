/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:12:36 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/01 16:30:27 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weaponB(NULL) {
}

HumanB::~HumanB() {
}

void	HumanB::attack() {
	if (_weaponB)
		std::cout	<< _name << " attacks with their " << _weaponB->getType()
					<< std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	_weaponB = &weapon;
}
