/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:29:35 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/04 14:17:43 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_name = "default_name";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout	<< "\033[34mClapTrap: Default constructor called\033[0m"
				<< std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout	<< "\033[34mClapTrap: String constructor called\033[0m"
				<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
	*this = claptrap;
	std::cout	<< "\033[34mClapTrap: Copy constructor called\033[0m"
				<< std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout	<< "\033[31mClapTrap: Destructor called\033[0m"
				<< std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &claptrap) {
	if (this != &claptrap) {
		_name = claptrap._name;
		_hit_points = claptrap._hit_points;
		_energy_points = claptrap._energy_points;
		_attack_damage = claptrap._attack_damage;
	}
	std::cout	<< "\033[34mClapTrap: Copy assignment operator called\033[0m"
				<< std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (_hit_points > 0 && _energy_points > 0) {
		_energy_points--;
		std::cout	<< "ClapTrap " << _name << " attacks " << target << "!"
					<< "\t[hit points: " << std::setw (2) << _hit_points << "] "
					<< "[energy points: " << std::setw (2) << _energy_points << "]"
					<< std::endl;
	}
	else
		std::cout	<< "ClapTrap " << _name << " has no energy to attack!"
					<< "\t[hit points: " << std::setw (2) << _hit_points << "] "
					<< "[energy points: " << std::setw (2) << _energy_points << "]"
					<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hit_points <= amount && _hit_points > 0) {
		_hit_points = 0;
		std::cout	<< "ClapTrap " << _name << " takes " << amount
					<< " points of damage!"
					<< "\t[hit points: " << std::setw (2) << _hit_points << "] "
					<< "[energy points: " << std::setw (2) << _energy_points << "]"
					<< std::endl;
	}
	else if (_hit_points > amount && _hit_points > 0) {
		_hit_points -= amount;
		std::cout	<< "ClapTrap " << _name << " takes " << amount
					<< " points of damage!"
					<< "\t[hit points: " << std::setw (2) << _hit_points << "] "
					<< "[energy points: " << std::setw (2) << _energy_points << "]"
					<< std::endl;
	}
	if (_hit_points == 0)
		std::cout	<< "ClapTrap " << _name << " is over!"
					<< "\t[hit points: " << std::setw (2) << _hit_points << "] "
					<< "[energy points: " << std::setw (2) << _energy_points << "]"
					<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_hit_points > 0 && _energy_points > 0) {
		_hit_points += amount;
		_energy_points--;
		std::cout	<< "ClapTrap " << _name << " repairs itself."
					<< "\t[hit points: " << std::setw (2) << _hit_points << "] "
					<< "[energy points: " << std::setw (2) << _energy_points << "]"
					<< std::endl;
	}
	else
		std::cout	<< "ClapTrap " << _name << " has no energy to repair!"
					<< "\t[hit points: " << std::setw (2) << _hit_points << "] "
					<< "[energy points: " << std::setw (2) << _energy_points << "]"
					<< std::endl;
}
