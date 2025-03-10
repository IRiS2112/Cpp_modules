/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:34:18 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 20:36:21 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main() {
	try {
		Bureaucrat	a("IRis", 21);
		std::cout << a;
	
		Intern someRandomIntern;
	
		AForm* rrf;
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Doctor");
	
		a.signForm(*rrf);
		a.executeForm(*rrf);
	}

    catch (const Intern::InternException &e) {
        std::cout << e.what() << std::endl;
    }

    catch (const Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }

	catch (const Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }

	return (0);
}