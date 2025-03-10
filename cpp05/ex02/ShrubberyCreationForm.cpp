/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:21:04 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 18:15:16 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145, 137) {
	_target = "target";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrubberycreationform) : AForm(shrubberycreationform) {
	_target = shrubberycreationform._target;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreationForm", false, 145, 137) {
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberycreationform) {
	if (this != &shrubberycreationform) {
		_target = shrubberycreationform._target;
		AForm::operator=(shrubberycreationform);
	}

	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (AForm::getIsSigned() == false)
		throw (AForm::GradeTooLowException("Form not signed!"));
	if (executor.getGrade() > AForm::getGradeExecute())
		throw (AForm::GradeTooLowException());

	std::ofstream	outfile;
	std::string		file = _target + "_shrubbery";
	outfile.open(file);
	if (!outfile.is_open())
		throw (AForm::GradeTooLowException("Could not open file!"));

	outfile	<< "                     ; ; ;" << std::endl
			<< "                   ;        ;  ;     ;;    ;" << std::endl
			<< "                ;                 ;         ;  ;" << std::endl
			<< "                                ;" << std::endl
			<< "                               ;                ;;" << std::endl
			<< "               ;          ;            ;              ;" << std::endl
			<< "               ;            ';,        ;               ;" << std::endl
			<< "               ;              'b      *" << std::endl
			<< "                ;              '$    ;;                ;;" << std::endl
			<< "               ;    ;           $:   ;:               ;" << std::endl
			<< "             ;;      ;  ;;      *;  @):        ;   ; ;" << std::endl
			<< "                          ;     :@,@):   ,;**:'   ;" << std::endl
			<< "              ;      ;,         :@@*: ;;**'      ;   ;" << std::endl
			<< "                       ';o;    ;:(@';@*''  ;" << std::endl
			<< "               ;  ;       'bq,;;:,@@*'   ,*      ;  ;" << std::endl
			<< "                          ,p$q8,:@)'  ;p*'      ;" << std::endl
			<< "                   ;     '  ; '@@Pp@@*'    ;  ;" << std::endl
			<< "                    ;  ; ;;    Y7'.'     ;  ;" << std::endl
			<< "                              :@):." << std::endl
			<< "                             .:@:'." << std::endl
			<< "                           .::(@:." << std::endl;

	outfile.close();

	std::cout	<< "A tree has been written to the file '" << file << "'."
				<< std::endl;

	return ;
}
