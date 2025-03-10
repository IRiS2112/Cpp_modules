/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 18:38:54 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/26 20:27:59 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog:\tDefault constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) {
	*this = dog;
	std::cout << "Dog:\tCopy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog:\tDestructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog) {
	if (this != &dog)
		_type = dog._type;
	std::cout << "Dog:\tCopy assignment operator called" << std::endl;
	return (*this);
}

std::string Dog::getType() const {
	return (_type);
}

void	Dog::makeSound() const {
	std::cout << "Bark" << std::endl;
}
