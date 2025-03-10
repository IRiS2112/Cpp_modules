/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:16:54 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/03 18:28:40 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
		public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &scavtrap);
	~ScavTrap();

	ScavTrap	&operator=(const ScavTrap &scavtrap);

	void	attack(const std::string& target);
	void	guardGate();
};

#endif