/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:09:36 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 19:12:03 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", false, 72, 45) {
	_target = "target";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robotomyrequestform) : AForm(robotomyrequestform) {
	_target = robotomyrequestform._target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", false, 72, 45) {
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyrequestform) {
	if (this != &robotomyrequestform) {
		_target = robotomyrequestform._target;
		AForm::operator=(robotomyrequestform);
	}

	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (AForm::getIsSigned() == false)
		throw (AForm::GradeTooLowException("Form not signed!"));
	if (executor.getGrade() > AForm::getGradeExecute())
		throw (AForm::GradeTooLowException());

    const std::string red = "\033[31m";
    const std::string reset = "\033[0m";
	std::cout	<< "████▒▒████████▒▒▒▒▒▒▓▓██▓▓████▓▓██▓▓████████████████████████████████" << std::endl
				<< "██▓▓░░████████▒▒░░░░▓▓██▓▓████▒▒██▓▓████████████████████████████████" << std::endl
				<< "██▒▒  ██████▓▓░░░░  ▒▒██▒▒████░░██▒▒████████████████████████████▓▓██" << std::endl
				<< "▓▓░░  ▓▓████▓▓  ░░  ░░██░░██▓▓  ▓▓░░████▓▓▓▓████████▓▓██▓▓██▓▓██▓▓██" << std::endl
				<< "▓▓    ▓▓▓▓▓▓▓▓  ░░    ▓▓  ██░░  ▓▓░░██▓▓▓▓▒▒██▓▓████▒▒▓▓▓▓▓▓▒▒▓▓▓▓██" << std::endl
				<< "▒▒    ▒▒▓▓▓▓░░        ▓▓  ██    ▒▒  ██▓▓▒▒░░██▓▓▓▓▓▓░░▓▓▒▒▓▓▒▒▓▓▓▓██" << std::endl
				<< "░░      ▒▒▒▒░░        ▒▒  ▒▒    ▒▒  ▓▓▒▒▒▒  ▓▓▒▒▒▒▒▒░░▒▒░░▒▒░░▒▒▒▒▒▒" << std::endl
				<< "░░      ▒▒▒▒░░        ▒▒  ▒▒    ▒▒  ▓▓▒▒▒▒  ▓▓▒▒▒▒▒▒░░▒▒░░▒▒░░▒▒▒▒▒▒" << std::endl
				<< "        ░░░░          ░░  ░░    ░░  ██▒▒░░  ░░▒▒▒▒░░  ░░  ░░  ░░░░░░" << std::endl
				<< "          ░░              ░░        ░░      ░░░░          ░░        " << std::endl
				<< "          ░░                                                        " << std::endl
				<< "          ░░                        ░░░░    ░░    ░░      ░░        " << std::endl
				<< "      ░░░░▒▒          ░░  ░░    ░░  ░░▒▒    ▒▒░░░░░░  ░░  ▓▓  ░░░░░░" << std::endl
				<< "░░    ░░▒▒▓▓░░        ▓▓  ▒▒    ▒▒  ▓▓▓▓░░  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓░░▒▒░░▒▒" << std::endl
				<< "▒▒    ▓▓▒▒██▒▒        ▓▓  ▓▓░░  ██░░▓▓▓▓▒▒░░▓▓▒▒▓▓▒▒▒▒▓▓▓▓██░░▓▓▒▒▓▓" << std::endl
				<< "▓▓    ▓▓▓▓██▓▓░░      ██  ▓▓▒▒  ██░░████▓▓▒▒▓▓██▓▓▓▓▓▓▓▓████▓▓██▒▒██" << std::endl
				<< "██░░  ▓▓▓▓██▓▓▒▒░░  ░░██░░██▓▓  ██▒▒████▓▓▓▓████▓▓██▓▓██████▓▓██▓▓██" << std::endl
				<< "██░░  ██████████░░  ░░██▒▒████░░██▓▓██████▓▓████████████████████▓▓██" << std::endl
				<< "██▒▒░░██████████░░░░▒▒██▓▓████░░██▓▓████████████████████████████▓▓██" << std::endl
				<< "██▒▒▒▒██████████▒▒▒▒▓▓████████▒▒████████████████████████████████████" << std::endl
				<< "██▓▓▓▓██████████▓▓▓▓▓▓████████▓▓████████████████████████████████████" << std::endl;

	std::srand(std::time(0));
	int	rand = std::rand();
	if (rand % 2)
		throw (AForm::GradeTooLowException("Robotomization failed."));
	
	std::cout	<< "The " << _target << " has been robotomized successfully!"
				<< std::endl;

	return ;
}
