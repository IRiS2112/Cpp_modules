/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:23:34 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/03 18:07:24 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
}

Point::Point(const float nb1, const float nb2) : _x(nb1), _y(nb2) {
}

Point::Point(const Point &point) : _x(point._x) , _y(point._y) {
	// *this = point;
}

Point::~Point() {
}

Point	&Point::operator=(const Point &point) {
	(void)point;
	return (*this);
}

Fixed	Point::GetArea(Point const &a, Point const &b, Point const &c) {
	Fixed	area = (a._x * (b._y - c._y) + b._x * (c._y - a._y) + c._x * (a._y - b._y)) / 2;
	if (area < 0)
		area = area * (-1);
	return (area);
}
