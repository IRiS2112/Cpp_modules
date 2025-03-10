/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:10:42 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 17:00:00 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA {
		private:
	std::string	_name;
	Weapon		&_weaponA;

		public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void	attack(void);
};

#endif