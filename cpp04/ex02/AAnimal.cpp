/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 18:28:02 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/27 18:11:04 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	_type = "AAnimal";
	std::cout << "AAnimal: Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) {
	_type = type;
	std::cout << "AAnimal: String constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &aanimal) {
	*this = aanimal;
	std::cout << "AAnimal: Copy constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal: Destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &aanimal) {
	if (this != &aanimal) {
		_type = aanimal._type;
	}
	std::cout << "AAnimal: Copy assignment operator called" << std::endl;
	return (*this);
}

std::string AAnimal::getType() const {
	return (_type);
}

void	AAnimal::makeSound() const {
	std::cout << "AAnimal sound" << std::endl;
}
