/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:52:04 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 17:54:17 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void	Form::_validGrade(int grade) const {
	if (grade > 150)
		throw (Form::GradeTooLowException());

	if (grade < 1)
		throw (Form::GradeTooHighException());

	return ;
}

Form::Form() : _name("name"),  _grade_sign(150) , _grade_exec(150) {
	_is_signed = false;
}

Form::~Form() {
}

Form::Form(const Form &form) : _name(form._name), _grade_sign(form._grade_sign), _grade_exec(form._grade_exec) {
	_is_signed = form._is_signed;
}

Form::Form(std::string const &name, bool is_signed, int grade_sign, int grade_execute) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_execute) {
	_is_signed = is_signed;

	_validGrade(_grade_sign);
	_validGrade(_grade_exec);
}

Form	&Form::operator=(const Form &form) {
	if (this != &form)
		_is_signed = form._is_signed;

	return (*this);
}

const	std::string	Form::getName() const {
	return (_name);
}

bool	Form::getIsSigned() const {
	return (_is_signed);
}

int	Form::getGradeSign() const {
	return (_grade_sign);
}

int	Form::getGradeExecute() const {
	return (_grade_exec);
}

Form::GradeTooHighException::GradeTooHighException() : _error("Grade too high!") {
}

Form::GradeTooHighException::GradeTooHighException(const char *error) : _error(error) {
}

const char	*Form::GradeTooHighException::what() const throw() {
	return (_error);
}

Form::GradeTooLowException::GradeTooLowException() : _error("Grade too low!") {
}

Form::GradeTooLowException::GradeTooLowException(const char *error) : _error(error) {
}

const char	*Form::GradeTooLowException::what() const throw() {
	return (_error);
}

std::ostream	&operator<<(std::ostream &os, const Form &form) {
	os	<< "-Name:\t\t\t" << form.getName() << ".\n"
		<< "-Is signed:\t\t" << form.getIsSigned() << ".\n"
		<< "-Grade to sign:\t\t" << form.getGradeSign() << ".\n"
		<< "-Grade to execute:\t" << form.getGradeExecute() << "."
		<< std::endl;

	return (os);
}

void	Form::beSigned(Bureaucrat const &bureaucrat) {
	if (_is_signed == true)
		throw (Form::GradeTooLowException("Form already signed!"));

	if (bureaucrat.getGrade() > _grade_sign)
		throw (Form::GradeTooLowException());

	_is_signed = true;

	return ;
}
