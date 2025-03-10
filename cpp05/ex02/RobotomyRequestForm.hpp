/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:09:32 by hakaraou          #+#    #+#             */
/*   Updated: 2024/10/03 12:19:38 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <iostream>

class	RobotomyRequestForm : public AForm {
		private:
	std::string	_target;

		public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &robotomyrequestform);
	RobotomyRequestForm(std::string const &target);
	~RobotomyRequestForm();

	RobotomyRequestForm	&operator=(const RobotomyRequestForm &robotomyrequestform);

	void	execute(Bureaucrat const &executor) const;
};

#endif