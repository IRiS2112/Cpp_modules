/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:36:28 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:17:34 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default type") {
}

AMateria::AMateria(std::string const &type) : _type(type) {
}

AMateria::AMateria(const AMateria &amateria) {
	*this = amateria;
}

AMateria::~AMateria() {
}

AMateria	&AMateria::operator=(const AMateria &amateria) {
	if (this != &amateria)
		_type = amateria._type;
	return (*this);
}

std::string const	&AMateria::getType() const {
	return (_type);
}

void	AMateria::use(ICharacter &target) {
	std::cout 	<< "* " << target.getName() << " *"
				<< std::endl;
}
