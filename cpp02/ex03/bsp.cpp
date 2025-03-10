/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:23:31 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/03 12:32:57 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	abc = Point::GetArea(a, b, c);
	Fixed	abp = Point::GetArea(a, b, point);
	Fixed	acp = Point::GetArea(a, c, point);
	Fixed	bcp = Point::GetArea(b, c, point);

	if (abp == 0 || acp == 0 || bcp == 0)
		return (false);

	if (abp + acp + bcp <= abc)
		return (true);

	return (false);
}