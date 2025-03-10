/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:28:41 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/04 10:56:58 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <iomanip>

class	ClapTrap {
		private:
	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

		public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &clapTrap);
	~ClapTrap();

	ClapTrap	&operator=(const ClapTrap &clapTrap);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif