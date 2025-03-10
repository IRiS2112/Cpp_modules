/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:35:06 by hakaraou          #+#    #+#             */
/*   Updated: 2024/10/17 11:23:09 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {
}

Base	*generate(void) {
	std::srand(std::time(0));
	int	rand = std::rand();
	Base *p;

	switch (rand % 3) {
			case 1:
		p = new A();
		break;

			case 2:
		p = new B();
		break;

			default:
		p = new C();
		break;
	}

	return (p);
}

void	identify(Base* p) {
	A *a = dynamic_cast<A*>(p);
	if (a) {
		std::cout	<< "A"
					<< std::endl;
		return ;
	}

	B *b = dynamic_cast<B*>(p);
	if (b) {
		std::cout	<< "B"
					<< std::endl;
		return ;
	}

	C *c = dynamic_cast<C*>(p);
	if (c) {
		std::cout	<< "C"
					<< std::endl;
		return ;
	}
}

void	identify(Base& p) {
	try {
		A a = dynamic_cast<A&>(p);
		std::cout	<< "A"
					<< std::endl;
		return ;
	}
	catch (const std::bad_cast &e) {
	}

	try {
		B b = dynamic_cast<B&>(p);
		std::cout	<< "B"
					<< std::endl;
		return ;
	}
	catch (const std::bad_cast &e) {
	}

	try {
		C c = dynamic_cast<C&>(p);
		std::cout	<< "C"
					<< std::endl;
		return ;
	}
	catch (const std::bad_cast &e) {
	}
}
