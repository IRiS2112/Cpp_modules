/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 18:34:41 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/26 20:27:42 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat:\tDefault constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) {
	*this = cat;
	std::cout << "Cat:\tCopy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat:\tDestructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat) {
	if (this != &cat)
		_type = cat._type;
	std::cout << "Cat:\tCopy assignment operator called" << std::endl;
	return (*this);
}

std::string Cat::getType() const {
	return (_type);
}

void	Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
