/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:44:25 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:20:30 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal {
		protected:
	std::string	_type;

		public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &animal);
	virtual ~Animal();

	Animal &operator=(const Animal &animal);

	std::string		getType() const;
	virtual void	makeSound() const;
};

#endif