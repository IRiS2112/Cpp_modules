/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:10:20 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 17:03:55 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string new_type) {
	_type = new_type;
}

Weapon::~Weapon() {
}

const std::string	&Weapon::getType() {
	std::string	&ref = _type;
	return (ref);
}

void	Weapon::setType(std::string new_type) {
	_type = new_type;
}
