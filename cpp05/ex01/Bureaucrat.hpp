/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:34:44 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 17:53:01 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class	Form;

class	Bureaucrat {
		private:
	const std::string	_name;
	int					_grade;

	void	_validGrade(int grade) const;

		public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat(std::string const &name, int grade);
	~Bureaucrat();

	Bureaucrat	&operator=(const Bureaucrat &bureaucrat);

	const std::string	getName() const;
	int					getGrade() const;
	void				increment();
	void				decrement();
	void				signForm(Form &form);

	class	GradeTooHighException : public std::exception {
			private:
		const char	*_error;

			public:
		GradeTooHighException();
		GradeTooHighException(const char *error);

		const char	*what() const throw();
	};
	class	GradeTooLowException : public std::exception {
			private:
		const char	*_error;

			public:
		GradeTooLowException();
		GradeTooLowException(const char *error);

		const char	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif