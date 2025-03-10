/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:12:20 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/01 19:47:45 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main () {
	uintptr_t	raw = 0;
	Data		ptr;
	ptr.value = 1221;

	std::cout	<< " -> Before serialization:"
				<< "\nPtr address: " << &ptr
				<< "\nPtr value: " << ptr.value
				<< std::endl;

	raw = Serializer::serialize(&ptr);
	if (!raw) {
		std::cerr	<< "\nPtr is NULL."
					<< std::endl;
		return (1);
	}

	std::cout	<< "\n------------------------------\n"
				<< "Raw value: " << raw
				<< std::endl
				<< "\n------------------------------\n";

	ptr = *Serializer::deserialize(raw);

	std::cout	<< " -> After serialization:"
				<< "\nPtr address: " << &ptr
				<< "\nPtr value: " << ptr.value
				<< std::endl;

	return (0);
}
