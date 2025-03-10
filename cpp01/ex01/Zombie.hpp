/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:06:45 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 15:50:02 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class	Zombie {
		private:
	std::string	_name;

		public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif