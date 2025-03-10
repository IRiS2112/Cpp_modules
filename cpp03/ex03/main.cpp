/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:28:15 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/04 15:39:06 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main() {
	ClapTrap	victor;
	ScavTrap	h("Heather");
	ScavTrap	heather(h);
	ClapTrap	v("Victor");
	FragTrap	iris("Iris");
	DiamondTrap	hannibal("Hannibal");
	victor = v;
	hannibal.whoAmI();
	hannibal.attack("Heather");
	victor.attack("Hannibal");
	hannibal.takeDamage(1);
	heather.takeDamage(9);
	iris.highFivesGuys();
	heather.guardGate();
	heather.beRepaired(1);
	heather.attack("Hannibal");
	hannibal.attack("Victor");
	victor.takeDamage(1);
	iris.attack("Hannibal");
	victor.beRepaired(100);
	heather.attack("Hannibal");
	return (0);
}
