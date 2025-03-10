/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:11:22 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/03 13:11:25 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed() : _fixed_point(0) {
	std::cout	<< "Default constructor called"
				<< std::endl;
}

Fixed::Fixed(const int nb) : _fixed_point(nb << _fractional_bits) {
	std::cout	<< "Int constructor called"
				<< std::endl;
}

Fixed::Fixed(const float nbf) : _fixed_point(roundf(nbf * (1 << _fractional_bits))) {
	std::cout	<< "Float constructor called"
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
	return (_fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	_fixed_point = raw;
}

float	Fixed::toFloat() const {
	return (float)(_fixed_point) / (1 << _fractional_bits);
}

int	Fixed::toInt() const {
	return (_fixed_point >> 8);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return (os);
}
