/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 18:34:41 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/20 14:57:49 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
	_brain = new Brain;
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) {
	_type = cat._type;
	_brain = new Brain(*cat._brain);
	std::cout << "Cat:\tCopy constructor called" << std::endl;
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat: Destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		_type = cat._type;
		delete _brain;
		_brain = new Brain(*cat._brain);
	}
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	return (*this);
}

std::string Cat::getType() const {
	return (_type);
}

void	Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
