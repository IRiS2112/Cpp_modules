/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:10:04 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 17:00:11 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class	Weapon {
		private:
	std::string	_type;

		public:
	Weapon(std::string new_type);
	~Weapon();

	const std::string	&getType(void);
	void				setType(std::string new_type);
};

#endif