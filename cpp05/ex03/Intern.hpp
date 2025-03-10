/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:26:47 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 20:26:09 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <exception>

class	Intern {
		public:
	Intern();
	Intern(const Intern &intern);
	~Intern();

	Intern	&operator=(const Intern &intern);

	AForm	*makeForm(const std::string &name, const std::string &target);

	class	InternException : public std::exception {
			public:
		const char	*what() const throw();
	};
};

#endif