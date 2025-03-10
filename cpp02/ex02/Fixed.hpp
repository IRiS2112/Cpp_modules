/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:49:38 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/03 12:37:45 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {
		private:
	int					_fixed_point;
	static const int	_fractional_bits;

		public:
	Fixed();
	Fixed(const int nb);
	Fixed(const float nbf);
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed 	&operator=(const Fixed &fixed);
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);
	Fixed	operator+(const Fixed &fixed) const;
	Fixed	operator-(const Fixed &fixed) const;
	Fixed	operator*(const Fixed &fixed) const;
	Fixed	operator/(const Fixed &fixed) const;
	bool	operator>(const Fixed &fixed) const;
	bool	operator<(const Fixed &fixed) const;
	bool	operator>=(const Fixed &fixed) const;
	bool	operator<=(const Fixed &fixed) const;
	bool	operator==(const Fixed &fixed) const;
	bool	operator!=(const Fixed &fixed) const;

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed		&min(Fixed &fixed1, Fixed &fixed2);
	static const Fixed	&min(const Fixed &fixed1, const Fixed &fixed2);
	static Fixed		&max(Fixed &fixed1, Fixed &fixed2);
	static const Fixed	&max(const Fixed &fixed1, const Fixed &fixed2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif