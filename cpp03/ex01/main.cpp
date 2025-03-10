/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:28:15 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/04 15:26:27 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main() {
	ClapTrap	victor;
	ScavTrap	h("Heather");
	ScavTrap	heather(h);
	ClapTrap	v("Victor");
	victor = v;
	victor.attack("Heather");
	heather.takeDamage(9);
	heather.guardGate();
	heather.beRepaired(1);
	heather.attack("Victor");
	victor.takeDamage(1000);
	victor.beRepaired(10);
	return (0);
}
