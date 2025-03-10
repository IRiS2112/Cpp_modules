/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:12:47 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 18:25:02 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", false, 25, 5) {
	_target = "target";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &presidentialpardonform) : AForm(presidentialpardonform) {
	_target = presidentialpardonform._target;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", false, 25, 5) {
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialpardonform) {
	if (this != &presidentialpardonform) {
		_target = presidentialpardonform._target;
		AForm::operator=(presidentialpardonform);
	}

	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (AForm::getIsSigned() == false)
		throw (AForm::GradeTooLowException("Form not signed!"));
	if (executor.getGrade() > AForm::getGradeExecute())
		throw (AForm::GradeTooLowException());

	std::cout	<< "The " << _target << " has been pardoned by Zaphod Beeblebrox."
				<< std::endl;

	return ;
}
