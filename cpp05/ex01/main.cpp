/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:34:18 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/23 11:03:41 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main() {
	try {
		Form		light("light", false, 212, 121);
		Bureaucrat	iris("IRis", 2);
		iris.signForm(light);
	}
    catch (const Form::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }
	catch (const Form::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }

	try {
		Form		light("light", false, 2, 12);
		Bureaucrat	iris("IRis", 2);
		iris.signForm(light);
	}
    catch (const Form::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }
	catch (const Form::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }

	try {
		Form		light("light", false, 1, 12);
		Bureaucrat	iris("IRis", 2);
		iris.signForm(light);
	}
    catch (const Form::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }
	catch (const Form::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }

	return (0);
}
