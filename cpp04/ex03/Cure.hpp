/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:29:33 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:21:45 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

# include "AMateria.hpp"

class	Cure : public AMateria {
		public:
	Cure();
	Cure(std::string type);
	Cure(const Cure &cure);
	~Cure();

	Cure	&operator=(const Cure &cure);

	AMateria	*clone() const;
	void		use(ICharacter &target);
};

#endif