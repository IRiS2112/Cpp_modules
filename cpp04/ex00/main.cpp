/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:36:09 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/20 16:19:56 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main() {
	{
		Animal animal;
		std::cout << animal.getType() << " " << std::endl;
		animal.makeSound();
	}
	std::cout << std::endl;
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		const WrongAnimal *wronganimal = new WrongAnimal();
		const WrongAnimal *wrongcat = new WrongCat();
		std::cout << wronganimal->getType() << " " << std::endl;
		std::cout << wrongcat->getType() << " " << std::endl;
		wronganimal->makeSound();
		wrongcat->makeSound();
		delete wronganimal;
		delete wrongcat;
	}
	std::cout << std::endl;
	{
		WrongCat	wcat;
		std::cout << wcat.getType() << " " << std::endl;
		wcat.makeSound();
	}
	return 0;
}