/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:31:24 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/10 12:58:15 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T &x, T &y) {
	T tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T	min(T &x, T &y) {
	if (x >= y)
		return (y);

	return (x);
}

template <typename T>
T	max(T &x, T &y) {
	if (x <= y)
		return (y);

	return (x);
}

#endif