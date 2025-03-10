/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:12:04 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:20:19 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal {
		protected:
	std::string	_type;

		public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &wronganimal);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &wronganimal);

	std::string	getType() const;
	void	makeSound() const;
};

#endif