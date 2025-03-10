/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:36:09 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/20 15:14:56 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main() {
	int				n = 2;
	const AAnimal	*animal[n];
	for (int i = 0; i < n; i++) {
		if (i < n / 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	for (int i = 0; i < n; i++) {
		std::cout << animal[i]->getType() << std::endl;
		animal[i]->makeSound();
	}
	for (int i = 0; i < n; i++) {
		delete animal[i];
	}

	// const AAnimal meta;

	return 0;
}