/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:11:54 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/27 18:11:38 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	_type = "Wrong Animal";
	std::cout << "Wrong Animal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	_type = type;
	std::cout << "Wrong Animal: String constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) {
	*this = wronganimal;
	std::cout << "Wrong Animal: Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal: Destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wronganimal) {
	if (this != &wronganimal) {
		_type = wronganimal._type;
	}
	std::cout << "Wrong Animal: Copy assignment operator called" << std::endl;
	return (*this);
}

std::string WrongAnimal::getType() const {
	return (_type);
}

void	WrongAnimal::makeSound() const {
	std::cout << "Wrong Animal sound" << std::endl;
}
