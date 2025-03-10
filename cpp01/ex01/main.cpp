/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:06:37 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 16:28:23 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	int		N = 10;
	Zombie	*zombie = zombieHorde(N, "hannibal");

	for (int i = 0; i < N; i++)
		(zombie + i)->announce();

	delete[] zombie;

	return (0);
}