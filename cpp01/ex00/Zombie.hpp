/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:22:12 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 11:08:05 by hakaraou         ###   ########.fr       */
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

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif