/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 18:16:21 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:20:39 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal{
		private:
	Brain	*_brain;

		public:
	Dog();
	Dog(const Dog &dog);
	~Dog();

	Dog &operator=(const Dog &dog);

	std::string	getType() const;
	void		makeSound() const;
};

#endif