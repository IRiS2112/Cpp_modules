/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 18:38:54 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/20 14:03:38 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	_brain = new Brain;
	std::cout << "Dog:\tDefault constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) {
	_type = dog._type;
	_brain = new Brain(*dog._brain);
	std::cout << "Dog:\tCopy constructor called" << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog:\tDestructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		_type = dog._type;
		delete _brain;
		_brain = new Brain(*dog._brain);
	}
	std::cout << "Dog:\tCopy assignment operator called" << std::endl;
	return (*this);
}

std::string Dog::getType() const {
	return (_type);
}

void	Dog::makeSound() const {
	std::cout << "Bark" << std::endl;
}
