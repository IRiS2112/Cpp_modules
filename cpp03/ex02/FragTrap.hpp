/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:07:49 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/03 18:39:10 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
		public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragtrap);
	~FragTrap();

	FragTrap	&operator=(const FragTrap &fragtrap);

	void	highFivesGuys(void);
};

#endif