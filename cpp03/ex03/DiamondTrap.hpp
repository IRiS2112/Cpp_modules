/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:47:51 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/03 19:08:57 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap {
		private:
	std::string	_name;

		public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &diamondtrap);
	~DiamondTrap();

	DiamondTrap	&operator=(const DiamondTrap &DiamondTrap);

	void	attack(const std::string& target);
	void	whoAmI();
};

#endif