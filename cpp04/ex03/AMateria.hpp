/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:36:20 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:21:38 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"
# include <iostream>

class	ICharacter;

class	AMateria {
		protected:
	std::string	_type;

		public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &amateria);
	virtual	~AMateria();

	AMateria	&operator=(const AMateria &amateria);

	virtual AMateria	*clone() const = 0;

	std::string const	&getType() const;
	virtual void		use(ICharacter &target);
};

#endif