/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:16:44 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/04 15:39:11 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_name = "default_name";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout	<< "\033[32mScavTrap: Default constructor called\033[0m"
				<< std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout	<< "\033[32mScavTrap: String constructor called\033[0m"
				<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) {
	*this = scavtrap;
	std::cout	<< "\033[32mScavTrap: Copy constructor called\033[0m"
				<< std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout	<< "\033[31mScavTrap: Destructor called\033[0m"
				<< std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavtrap) {
	if (this != &scavtrap) {
		_name = scavtrap._name;
		_hit_points = scavtrap._hit_points;
		_energy_points = scavtrap._energy_points;
		_attack_damage = scavtrap._attack_damage;
	}
	std::cout	<< "\033[32mScavTrap: Copy assignment operator called\033[0m"
				<< std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (_hit_points > 0 && _energy_points > 0) {
		_energy_points--;
		std::cout	<< "ScavTrap " << _name << " attacks " << target << "!"
					<< "\t[hit points: " << std::setw (2) << _hit_points << "] "
					<< "[energy points: " << std::setw (2) << _energy_points << "]"
					<< std::endl;
	}
	else
		std::cout	<< "ScavTrap " << _name << " has no energy to attack!"
					<< "\t[hit points: " << std::setw (2) << _hit_points << "] "
					<< "[energy points: " << std::setw (2) << _energy_points << "]"
					<< std::endl;
}

void	ScavTrap::guardGate() {
	std::cout	<< "\033[32mScavTrap is now in Gate keeper mode.\033[0m"
				<< std::endl;
}
