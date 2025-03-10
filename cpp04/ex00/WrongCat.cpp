/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:11:10 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/27 09:58:05 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat") {
	std::cout << "Wrong Cat:\tDefault constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat) {
	*this = wrongcat;
	std::cout << "Wrong Cat:\tCopy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Wrong Cat:\tDestructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat) {
	if (this != &wrongcat)
		_type = wrongcat._type;
	std::cout << "Wrong Cat:\tCopy assignment operator called" << std::endl;
	return (*this);
}

std::string	WrongCat::getType() const {
	return (_type);
}

void	WrongCat::makeSound() const {
	std::cout << "I go meow" << std::endl;
}