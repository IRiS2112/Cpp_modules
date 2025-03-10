/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:51:46 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 18:07:14 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm {
		private:
	const std::string 	_name;
	bool				_is_signed;
	const int			_grade_sign;
	const int			_grade_exec;

	void	_validGrade(int grade) const;

		public:
	AForm();
	AForm(const AForm &aform);
	AForm(std::string const &name, bool is_signed, int grade_sign, int grade_execute);
	virtual ~AForm();

	AForm	&operator=(const AForm &aform);

	const std::string	getName() const;
	bool				getIsSigned() const;
	int					getGradeSign() const;
	int					getGradeExecute() const;
	void				beSigned(Bureaucrat const &bureaucrat);
	virtual void		execute(Bureaucrat const &executor) const = 0;

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

std::ostream	&operator<<(std::ostream &os, const AForm &aform);

#endif