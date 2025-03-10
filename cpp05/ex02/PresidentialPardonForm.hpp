/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:12:58 by hakaraou          #+#    #+#             */
/*   Updated: 2024/10/03 13:16:36 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <iostream>

class	PresidentialPardonForm : public AForm {
		private:
	std::string	_target;

		public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &presidentialpardonform);
	PresidentialPardonForm(std::string const &target);
	~PresidentialPardonForm();

	PresidentialPardonForm	&operator=(const PresidentialPardonForm &presidentialpardonform);

	void	execute(Bureaucrat const &executor) const;
};

#endif