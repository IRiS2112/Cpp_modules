/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:21:14 by hakaraou          #+#    #+#             */
/*   Updated: 2024/12/17 18:11:41 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <fstream>

class	ShrubberyCreationForm : public AForm {
		private:
	std::string	_target;

		public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &shrubberycreationform);
	ShrubberyCreationForm(std::string const &target);
	~ShrubberyCreationForm();

	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &shrubberycreationform);

	void	execute(Bureaucrat const &executor) const;
};

#endif