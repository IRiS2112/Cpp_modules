/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:06:47 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 15:57:07 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
		new (zombie + i) Zombie(name);

	return (zombie);
}