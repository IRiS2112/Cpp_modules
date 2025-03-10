/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:34:44 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 17:51:04 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

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

	class	GradeTooHighException : public std::exception {
		public:
			const char	*what() const throw();
	};
	class	GradeTooLowException : public std::exception {
		public:
			const char	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif