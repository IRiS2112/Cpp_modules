/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:23:43 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/29 13:42:58 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(std::string type) : AMateria(type) {
}

Ice::Ice(const Ice &ice) {
	*this = ice;
}

Ice::~Ice() {
}

Ice	&Ice::operator=(const Ice &ice) {
	if (this != &ice) {
		_type = ice._type;
	}

	return (*this);
}

AMateria	*Ice::clone() const {
	Ice *new_ice = new Ice(this->_type);

	return (new_ice);
}

void	Ice::use(ICharacter &target) {
	std::cout 	<< "* shoots an ice bolt at " << target.getName() << " *"
				<< std::endl;
}
