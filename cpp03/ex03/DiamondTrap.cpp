/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:47:35 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/18 19:59:37 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
	DiamondTrap::_name = "default";
	ClapTrap::_name = "default_clap_name";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
	std::cout	<< "\033[35mDiamondTrap: Default constructor called\033[0m"
				<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	DiamondTrap::_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
	std::cout	<< "\033[35mDiamondTrap: String constructor called\033[0m"
				<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) {
	*this = diamondtrap;
	std::cout	<< "\033[35mDiamondTrap: Copy constructor called\033[0m"
				<< std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\033[31mDiamondTrap: Destructor called\033[0m" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
	if (this != &diamondtrap) {
		DiamondTrap::_name = diamondtrap.DiamondTrap::_name;
		ClapTrap::_name = diamondtrap.ClapTrap::_name;
		_hit_points = diamondtrap._hit_points;
		_energy_points = diamondtrap._energy_points;
		_attack_damage = diamondtrap._attack_damage;
	}
	std::cout	<< "\033[35mDiamondTrap: Copy assignment operator called\033[0m"
				<< std::endl;
	return (*this);
}


void	DiamondTrap::attack(const std::string& target) {
	if (_hit_points > 0 && _energy_points > 0) {
		_energy_points--;
		std::cout	<< "DiamondTrap " << _name << " attacks " << target << "!"
					<< std::endl;
	}
	else
		std::cout	<< "DiamondTrap " << _name << " has no energy to attack!"
					<< std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout	<< "\n\t\033[35m" << DiamondTrap::_name << "..."
				<< ClapTrap::_name << "..!!\033[0m\n"
				<< std::endl;
}
