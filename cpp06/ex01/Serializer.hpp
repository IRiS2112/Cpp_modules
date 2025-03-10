/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:57:34 by hakaraou          #+#    #+#             */
/*   Updated: 2024/10/16 18:01:18 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>
# include <iostream>
# include "Data.hpp"

class Serializer {
		private:
	Serializer();
	Serializer(const Serializer &serializer);
	~Serializer();

	Serializer	&operator=(const Serializer &serializer);
	
		public:
	static uintptr_t	serialize(Data *ptr);
	static Data			*deserialize(uintptr_t raw);
	
};

#endif