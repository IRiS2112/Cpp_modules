/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 08:05:44 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/03 13:08:07 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed() : _fixed_point(0) {
	std::cout	<< "Default constructor called"
				<< std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout	<< "Copy constructor called"
				<< std::endl;
	*this = fixed;
}

Fixed::~Fixed() {
	std::cout	<< "Destructor called"
				<< std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed) {
	std::cout	<< "Copy assignment operator called"
				<< std::endl;
	if (this != &fixed)
		_fixed_point = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const {
	std::cout	<< "getRawBits member function called"
				<< std::endl;
	return (_fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	_fixed_point = raw;
}
