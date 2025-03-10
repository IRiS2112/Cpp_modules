/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:50:10 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/20 14:19:57 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		_ideas[i] = "No idea";
	std::cout << "Brain:\tDefault constructor called" << std::endl;
}

Brain::Brain(std::string idea) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
	std::cout << "Brain:\tString constructor called" << std::endl;
}

Brain::Brain(const Brain &brain) {
	*this = brain;
	std::cout << "Brain:\tCopy constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain:\tDestructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain) {
	if (this != &brain) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = brain._ideas[i];
	}
	std::cout << "Brain:\tCopy assignment operator called" << std::endl;
	return (*this);
}
