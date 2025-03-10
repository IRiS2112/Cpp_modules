/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:23:37 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/02 08:14:00 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"

class	Point {
		private:
	Fixed const	_x;
	Fixed const	_y;

		public:
	Point();
	Point(const float nb1, const float nb2);
	Point(const Point &point);
	~Point();

	Point	&operator=(const Point &point);

	static Fixed	GetArea(Point const &a, Point const &b, Point const &c);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif