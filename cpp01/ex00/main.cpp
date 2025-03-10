/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:21:34 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 11:02:51 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	randomChump("Victor");

	Zombie	*zombie = newZombie("Hannibal");
	zombie->announce();
	delete zombie;

	return (0);
}