/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:51:20 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/19 17:31:02 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0) {
}

Span::Span(unsigned int n) : _n(n) {
}

Span::Span(const Span &span) : _n(span._n), _vec(span._vec) {
}

Span::~Span() {
}

Span	&Span::operator=(const Span &span) {
	if (this != &span) {
		_n = span._n;
		_vec = span._vec;
	}

	return (*this);
}

void	Span::addNumber(const int value) {
	if (_vec.size() >= _n)
		throw (LengthError());

	_vec.push_back(value);
}

int		Span::shortestSpan() {
	if (_vec.size() < 2)
		throw (LogicError());

	std::vector<int>	sortvec = _vec;
	int					span;
	int					tmp;

	std::sort(sortvec.begin(), sortvec.end());
	span = sortvec[1] - sortvec[0];
	for (unsigned long i = 1; i < _vec.size() - 1; i++) {
		tmp = sortvec[i + 1] - sortvec[i];
		if (tmp < span)
			span = tmp;
	}

	return (span);
}

int		Span::longestSpan() {
	if (_vec.size() < 2)
		throw (LogicError());

	std::vector<int>	sortvec = _vec;
	int					span;

	std::sort(sortvec.begin(), sortvec.end());
	span = sortvec[sortvec.size() - 1] - sortvec[0];

	return (span);
}

void	Span::vecGenerate() {
	_vec.resize( _n);
    srand(time(NULL));
	std::generate(_vec.begin(), _vec.end(), std::rand);
}

const char	*Span::LengthError::what() const throw() {
	return ("Span is already full!");
}

const char	*Span::LogicError::what() const throw() {
	return ("Not enough numbers to find a span!");
}

std::vector<int>	Span::getVec() const {
	return (_vec);	
}
