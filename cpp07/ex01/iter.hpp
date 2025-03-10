/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:23:42 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/10 19:38:55 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename Y>
void	iter(T *a, size_t b, Y (*func)(T &x)) {
	for (size_t i = 0; i < b; i++)
		func(a[i]);
}

template <typename T>
void	func(T &x) {
	x += 32;
}

#endif