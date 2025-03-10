/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:10:48 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:20:48 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal{
		public:
	WrongCat();
	WrongCat(const WrongCat &wrongcat);
	~WrongCat();

	WrongCat	&operator=(const WrongCat &wrongcat);

	std::string	getType() const;
	void		makeSound() const;
};

#endif