/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:44:25 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:20:55 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	AAnimal {
		protected:
	std::string	_type;

		public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal &aanimal);
	virtual ~AAnimal();

	AAnimal &operator=(const AAnimal &aanimal);

	std::string		getType() const;
	virtual void	makeSound() const = 0;
};

#endif