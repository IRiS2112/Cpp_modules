/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:50:10 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/27 18:10:38 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain() {
	for (int i = 0; i < 100; i++)
		_ideas[i] = "No idea";
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(std::string idea) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
	std::cout << "Brain: String constructor called" << std::endl;
}

Brain::Brain(const Brain &brain) {
	*this = brain;
	std::cout << "Brain: Copy constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain) {
	if (this != &brain) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = brain._ideas[i];
	}
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	return (*this);
}
