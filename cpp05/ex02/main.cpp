/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:34:18 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 19:49:56 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	try {		
		Bureaucrat					b("IRis", 5);

		ShrubberyCreationForm		a("light");
		b.signForm(a);
		b.executeForm(a);

		std::cout << std::endl;

		RobotomyRequestForm		c("Human");
		b.signForm(c);
		b.executeForm(c);

		std::cout << std::endl;

		PresidentialPardonForm		d("Doctor");
		b.signForm(d);
		b.executeForm(d);
	}

    catch (const Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }
	catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }
    catch (const AForm::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }
	catch (const AForm::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }

	return (0);
}
