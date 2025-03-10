/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:27:15 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/20 10:37:29 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {
		private:
	AMateria	*_source[4];

		public:
	MateriaSource();
	MateriaSource(const MateriaSource &materiasource);
	~MateriaSource();

	MateriaSource	&operator=(const MateriaSource &materiasource);

	void		learnMateria(AMateria *m);
	AMateria	*createMateria(std::string const &type);
};

#endif