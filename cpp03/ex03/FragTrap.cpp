/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:08:00 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/04 14:36:33 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	_name = "default_name";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout	<< "\033[33mFragTrap: Default constructor called\033[0m"
				<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout	<< "\033[33mFragTrap: String constructor called\033[0m"
				<< std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) {
	*this = fragtrap;
	std::cout	<< "\033[33mFragTrap: Copy constructor called\033[0m"
				<< std::endl;
}

FragTrap::~FragTrap() {
	std::cout	<< "\033[31mFragTrap: Destructor called\033[0m"
				<< std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragtrap) {
	if (this != &fragtrap) {
		_name = fragtrap._name;
		_hit_points = fragtrap._hit_points;
		_energy_points = fragtrap._energy_points;
		_attack_damage = fragtrap._attack_damage;
	}
	std::cout	<< "\033[33mFragTrap: Copy assignment operator called\033[0m"
				<< std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys() {
	std::cout	<< "\n\t\t\033[33m----------HIGH FIVE----------\n\033[0m"
				<< std::endl;
}
