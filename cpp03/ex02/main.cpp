/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:28:15 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/04 15:36:19 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main() {
	ClapTrap	victor;
	ScavTrap	h("Heather");
	ScavTrap	heather(h);
	ClapTrap	v("Victor");
	FragTrap	iris("Iris");
	victor = v;
	victor.attack("Heather");
	heather.takeDamage(9);
	iris.highFivesGuys();
	heather.guardGate();
	heather.beRepaired(1);
	heather.attack("Victor");
	victor.takeDamage(100);
	iris.attack("Victor");
	victor.beRepaired(10);
	return (0);
}

