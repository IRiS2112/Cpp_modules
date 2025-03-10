/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:51:46 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 17:53:36 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {
		private:
	const std::string 	_name;
	bool				_is_signed;
	const int			_grade_sign;
	const int			_grade_exec;

	void	_validGrade(int grade) const;

		public:
	Form();
	Form(const Form &form);
	Form(std::string const &name, bool is_signed, int grade_sign, int grade_execute);
	~Form();

	Form	&operator=(const Form &form);

	const std::string	getName() const;
	bool				getIsSigned() const;
	int					getGradeSign() const;
	int					getGradeExecute() const;
	void				beSigned(Bureaucrat const &bureaucrat);

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

std::ostream	&operator<<(std::ostream &os, const Form &form);

#endif