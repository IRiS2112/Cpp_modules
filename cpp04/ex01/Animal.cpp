/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 18:28:02 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/26 20:27:24 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	_type = "Animal";
	std::cout << "Animal:\tDefault constructor called" << std::endl;
}

Animal::Animal(std::string type) {
	_type = type;
	std::cout << "Animal:\tString constructor called" << std::endl;
}

Animal::Animal(const Animal &animal) {
	*this = animal;
	std::cout << "Animal:\tCopy constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal:\tDestructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal) {
	if (this != &animal) {
		_type = animal._type;
	}
	std::cout << "Animal:\tCopy assignment operator called" << std::endl;
	return (*this);
}

std::string Animal::getType() const {
	return (_type);
}

void	Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}
