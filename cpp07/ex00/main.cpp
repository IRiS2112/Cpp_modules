/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:31:11 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/10 13:19:57 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void) {
	int	a = 2;
	int	b = 3;

	::swap(a, b);
	std::cout	<< "a = " << a << ", b = " << b
				<< std::endl;

	std::cout	<< "min(a, b) = " << ::min(a, b)
				<< std::endl;
	std::cout	<< "max(a, b) = " << ::max(a, b)
				<< std::endl;

	std::string	c = "chaine1";
	std::string	d = "chaine2";

	::swap(c, d);
	std::cout	<< "c = " << c << ", d = " << d
				<< std::endl;

	std::cout	<< "min(c, d) = " << ::min(c, d)
				<< std::endl;
	std::cout	<< "max(c, d) = " << ::max(c, d)
				<< std::endl;

	return (0);
}