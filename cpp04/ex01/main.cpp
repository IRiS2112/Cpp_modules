/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:36:09 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/20 16:20:46 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main() {
	{
		int				n = 4;
		const Animal	*animal[n];
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
	}
	std::cout << std::endl;
	{
		const Animal* l = new Dog();
		const Animal* k = new Cat();
		delete l;
		delete k;
	}
	std::cout << std::endl;
	{
		Dog basic;
		Dog tmp = basic;
	}
	return 0;
}