/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:28:15 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/04 15:24:07 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap	iris;
	ClapTrap	v("Victor");
	ClapTrap	victor(v);
	ClapTrap	i("Iris");
	iris = i;
	iris.attack("Victor");
	victor.takeDamage(9);
	victor.beRepaired(1);
	victor.attack("Iris");
	iris.takeDamage(100);
	iris.beRepaired(10);
	return (0);
}
