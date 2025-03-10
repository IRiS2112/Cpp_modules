/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:17:53 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/03 13:20:11 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) {
	if (bsp(Point(1, 1), Point(2, 3), Point(3, 1), Point(2, 2)) == true) {
		std::cout	<< "the point is inside the triangle"
					<< std::endl;
		return (0);
	}
	std::cout	<< "the point is outside the triangle"
				<< std::endl;
	return (0);
}