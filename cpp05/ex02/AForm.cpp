/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:52:04 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 18:09:02 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

void	AForm::_validGrade(int grade) const {
	if (grade > 150)
		throw (AForm::GradeTooLowException());

	if (grade < 1)
		throw (AForm::GradeTooHighException());

	return ;
}

AForm::AForm() : _name("name"),  _grade_sign(150) , _grade_exec(150) {
	_is_signed = false;
}

AForm::~AForm() {
}

AForm::AForm(const AForm &aform) : _name(aform._name), _grade_sign(aform._grade_sign), _grade_exec(aform._grade_exec) {
	_is_signed = aform._is_signed;
}

AForm::AForm(std::string const &name, bool is_signed, int grade_sign, int grade_execute) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_execute) {
	_is_signed = is_signed;

	_validGrade(_grade_sign);
	_validGrade(_grade_exec);
}

AForm	&AForm::operator=(const AForm &aform) {
	if (this != &aform)
		_is_signed = aform._is_signed;

	return (*this);
}

const	std::string	AForm::getName() const {
	return (_name);
}

bool	AForm::getIsSigned() const {
	return (_is_signed);
}

int	AForm::getGradeSign() const {
	return (_grade_sign);
}

int	AForm::getGradeExecute() const {
	return (_grade_exec);
}

AForm::GradeTooHighException::GradeTooHighException() : _error("Grade too high!") {
}

AForm::GradeTooHighException::GradeTooHighException(const char *error) : _error(error) {
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return (_error);
}

AForm::GradeTooLowException::GradeTooLowException() : _error("Grade too low!") {
}

AForm::GradeTooLowException::GradeTooLowException(const char *error) : _error(error) {
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return (_error);
}

std::ostream	&operator<<(std::ostream &os, const AForm &aform) {
	os	<< "-Name:\t\t\t" << aform.getName() << ".\n"
		<< "-Is signed:\t\t" << aform.getIsSigned() << ".\n"
		<< "-Grade to sign:\t\t" << aform.getGradeSign() << ".\n"
		<< "-Grade to execute:\t" << aform.getGradeExecute() << "."
		<< std::endl;

	return (os);
}

void	AForm::beSigned(Bureaucrat const &bureaucrat) {
	if (_is_signed == true)
		throw (AForm::GradeTooLowException("Form already signed!"));

	if (bureaucrat.getGrade() > _grade_sign)
		throw (AForm::GradeTooLowException());

	_is_signed = true;

	return ;
}
