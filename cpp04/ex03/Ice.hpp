/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:23:34 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/21 12:21:49 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria {
		public:
	Ice();
	Ice(std::string type);
	Ice(const Ice &ice);
	~Ice();

	Ice	&operator=(const Ice &ice);

	AMateria	*clone() const;
	void		use(ICharacter &target);
};

#endif