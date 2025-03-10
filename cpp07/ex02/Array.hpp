/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:58:08 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/11 09:23:22 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array {
		private:
	T				*_array;
	unsigned int	_size;

		public:
	Array();
	Array(unsigned int n);
	Array(const Array &array);
	~Array();

	Array	&operator=(const Array &array);

	class	OutOfRange : public std::exception {
		public:
			const char	*what() const throw();
	};

	T		&operator[](const unsigned int n);
	const T	&operator[](const unsigned int n) const;

	unsigned int	size() const;
};

# include "Array.tpp"

#endif