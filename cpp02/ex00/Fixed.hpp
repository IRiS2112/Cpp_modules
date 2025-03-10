/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 08:05:27 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/03 12:36:58 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class	Fixed {
		private:
	int					_fixed_point;
	static const int	_fractional_bits;

		public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed &operator=(const Fixed &fixed);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif