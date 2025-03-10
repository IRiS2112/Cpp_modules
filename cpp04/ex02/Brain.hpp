/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:50:00 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:21:18 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain {
		private:
	std::string	_ideas[100];

		public:
	Brain();
	Brain(std::string ideas);
	Brain(const Brain &brain);
	~Brain();

	Brain	&operator=(const Brain &brain);
};

#endif