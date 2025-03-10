/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:29:49 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 11:56:47 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(std::string type) : AMateria(type) {
}

Cure::Cure(const Cure &cure) {
	*this = cure;
}

Cure::~Cure() {
}

Cure	&Cure::operator=(const Cure &cure) {
	if (this != &cure) {
		_type = cure._type;
	}
	return (*this);
}

AMateria	*Cure::clone() const {
	Cure *new_cure = new Cure(this->_type);

	return (new_cure);
}

void	Cure::use(ICharacter &target) {
	std::cout 	<< "* heals " << target.getName() << "'s wounds *"
				<< std::endl;
}
