/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:23:49 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/19 17:29:56 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <array>
# include <vector>
# include <deque>
# include <list>
# include <forward_list>
# include <exception>
# include <algorithm>

class Empty : public std::exception {
	public:
		const char	*what() const throw() {
			return ("Container is empty!");
		}
};

class NotFound : public std::exception {
	public:
		const char	*what() const throw() {
			return ("Target not found!");
		}
};

template <typename T>
int	easyfind(T &container, int target) {
	if (container.empty())
		throw (Empty());

	typename T::iterator	it = std::find(container.begin(), container.end(), target);
	if (it == container.end())
		throw (NotFound());

	return (*it);
}

#endif