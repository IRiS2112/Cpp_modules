/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:35:10 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 17:50:38 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	Bureaucrat::_validGrade(int grade) const {
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());

	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());

	return ;
}

Bureaucrat::Bureaucrat() : _name("name"), _grade(150) {
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name) {
	_grade = bureaucrat._grade;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade) {
	_validGrade(_grade);
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	if (this != &bureaucrat)
		_grade = bureaucrat._grade;

	return (*this);
}

const std::string	Bureaucrat::getName() const {
	return (_name);
}

int	Bureaucrat::getGrade() const {
	return (_grade);
}

void	Bureaucrat::increment() {
	_validGrade(_grade - 1);
	_grade--;

	return ;
}

void	Bureaucrat::decrement() {
	_validGrade(_grade + 1);
	_grade++;

	return ;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low!");
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os	<< bureaucrat.getName() << ", bureaucrat grade "
		<< bureaucrat.getGrade() << "."
		<< std::endl;

	return (os);
}
