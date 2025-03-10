/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 08:58:29 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:22:01 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class	IMateriaSource {
		public:
	virtual ~IMateriaSource() {};
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif