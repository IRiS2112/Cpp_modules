/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:58:44 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/20 19:52:53 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default name") {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 4; i++)
		_trash[i] = NULL;
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 4; i++)
		_trash[i] = NULL;
}

Character::Character(const Character &character) {
	*this = character;
}

Character::~Character() {
	for (int j = 0; j < 4; j++)
		if (_inventory[j]) {
			delete _inventory[j];
			_inventory[j] = NULL;
		}
	for (int j = 0; j < 4; j++)
		if (_trash[j]) {
			delete _trash[j];
			_trash[j] = NULL;
		}
}

Character	&Character::operator=(const Character &character) {
	if (this != &character) {
		_name = character._name;
		for (int i = 0; i < 4; i++) {
			if (_inventory[i])
				delete _inventory[i];
			if (_trash[i]) {
				delete _trash[i];
				_trash[i] = NULL;
			}
			if (character._inventory[i])
				_inventory[i] = character._inventory[i]->clone();
		}
	}

	return (*this);
}

std::string const	&Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria *m) {
	for (int j = 0; j < 4; j++)
		if (_trash[j]) {
			delete _trash[j];
			_trash[j] = NULL;
		}

	int	i = -1;
	while (++i < 4)
		if (!_inventory[i]) {
			_inventory[i] = m;
			break;
		}

	if (i == 4)
		delete m;
}

void	Character::unequip(int idx) {
	if (_inventory[idx]) {
		_trash[idx] = _inventory[idx];
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if (_inventory[idx]) {
		_inventory[idx]->use(target);
	}
}
