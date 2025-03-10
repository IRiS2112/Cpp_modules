/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:27:06 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 11:49:59 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiasource) {
	*this = materiasource;
}

MateriaSource::~MateriaSource() {
	for (int j = 0; j < 4; j++)
		if (_source[j]) {
			delete _source[j];
			_source[j] = NULL;
		}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &materiasource) {
	if (this != &materiasource) {
		for (int i = 0; i < 4; i++) {
			if (materiasource._source[i])
				_source[i] = materiasource._source[i]->clone();
		}
	}

	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m) {
	int	i = -1;
	while (++i < 4)
		if (!_source[i]) {
			_source[i] = m;
			break;
		}
	if (i == 4)
		delete m;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (_source[i] && _source[i]->getType() == type)
			return (_source[i]->clone());
	}
	return (NULL);
}
