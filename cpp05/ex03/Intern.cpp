/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:26:44 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 20:41:48 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern &intern) {
	(void)intern;
}

Intern::~Intern() {
}

Intern	&Intern::operator=(const Intern &intern) {
	if (this != &intern) {
	}

	return (*this);
}

AForm	*Intern::makeForm(const std::string &name, const std::string &target) {
	const char *names[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	int	id = -1;
	while (++id < 3 && name.compare(names[id]));

	switch (id) {
		case 3:
			throw (Intern::InternException());
		default:
			std::cout	<< "Intern creates "
						<< name
						<< std::endl;
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
	}

	return (NULL);
}

const char	*Intern::InternException::what() const throw() {
	return ("Intern can not creates the form!");
}