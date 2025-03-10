/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:34:18 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/23 09:48:59 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	try {
		Bureaucrat	iris;
		std::cout << iris;

		iris.decrement();
		std::cout << iris;

		iris.increment();
		std::cout << iris;
	}
    catch (const Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }
	catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }

	try {
		Bureaucrat	iris("IRis", 1);
		std::cout << iris;

		iris.decrement();
		std::cout << iris;

		iris.increment();
		std::cout << iris;
	}
    catch (const Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }
	catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }

	try {
		Bureaucrat	heather("heather", 21);
		Bureaucrat	hannibal("hannibal", 12);
		std::cout << heather;
		std::cout << hannibal;

		hannibal = heather;
		std::cout << hannibal;
	
	}
    catch (const Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }
	catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }

	return (0);
}
