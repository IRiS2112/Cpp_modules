/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 08:53:15 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:21:52 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IChARACTER_HPP
# define IChARACTER_HPP

# include "AMateria.hpp"

class	AMateria;

class	ICharacter {
		public:
	virtual ~ICharacter() {};
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
};

#endif