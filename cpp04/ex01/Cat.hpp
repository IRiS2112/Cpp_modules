/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 18:18:50 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:20:35 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal{
		private:
	Brain	*_brain;

		public:
	Cat();
	Cat(const Cat &cat);
	~Cat();

	Cat &operator=(const Cat &cat);

	std::string	getType() const;
	void		makeSound() const;
};

#endif