/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:57:48 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/01 18:10:08 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
}

Serializer::Serializer(const Serializer &serializer) {
	*this = serializer;
}

Serializer::~Serializer() {
}

Serializer	&Serializer::operator=(const Serializer &serializer) {
	(void)serializer;

	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr) {
	if (!ptr)
		return (0);

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}
