/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:35:19 by hakaraou          #+#    #+#             */
/*   Updated: 2024/10/17 11:23:04 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <random>
# include <iostream>

class Base {
		public:
	virtual ~Base();
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif