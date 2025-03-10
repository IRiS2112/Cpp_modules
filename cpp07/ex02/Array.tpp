/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:12:39 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/11 09:31:58 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(nullptr), _size(0) {
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	(_size > 0)	? _array = new T[_size]
				: _array = nullptr;//NULL
}

template <typename T>
Array<T>::Array(const Array &array) : _size(array._size) {
	if (_size > 0) {
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = array._array[i];
	}
	else
		_array = nullptr;
}

template <typename T>
Array<T>::~Array() {
	delete[] _array;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &array) {
	if (this != &array) {
		 _size = array._size;
		if (_size > 0) {
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = array._array[i];
		}
		else
			_array = nullptr;
	}

	return (*this);
}

template <typename T>
T	&Array<T>::operator[](const unsigned int n) {
    if (n >= _size)
        throw (OutOfRange());
	return (_array[n]);
}

template <typename T>
const T	&Array<T>::operator[](const unsigned int n) const {
    if (n >= _size)
        throw (OutOfRange());
	return (_array[n]);
}

template <typename T>
unsigned int	Array<T>::size() const {
	return (_size);
}

template <typename T>
const char	*Array<T>::OutOfRange::what() const throw() {
	return ("Error: Index out of bounds\n");
}
