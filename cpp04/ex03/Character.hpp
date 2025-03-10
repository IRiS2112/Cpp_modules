/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:58:52 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/29 11:01:58 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character : public ICharacter {
		private:
	std::string	_name;
	AMateria 	*_inventory[4];
	AMateria 	*_trash[4];

		public:
	Character();
	Character(std::string name);
	Character(const Character &character);
	~Character();

	Character	&operator=(const Character &character);

	std::string const	&getName() const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
};

#endif