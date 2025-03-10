/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:12:39 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 17:00:07 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB {
		private:
	std::string	_name;
	Weapon		*_weaponB;

		public:
	HumanB(std::string name);
	~HumanB();

	void	attack(void);
	void	setWeapon(Weapon &weapon);
};

#endif