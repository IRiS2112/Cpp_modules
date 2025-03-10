/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:23:52 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/19 18:38:09 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>
# include <iterator>

template <typename T, typename C = std::deque<T> >
class	MutantStack : public std::stack<T, C> {
		public:
    MutantStack() : std::stack<T, C>() {}
    MutantStack(const MutantStack& mutanstack) : std::stack<T, C>(mutanstack) {}
	~MutantStack() {}

	MutantStack	&operator=(const MutantStack& mutanstack) {
        if (this != &mutanstack)
            std::stack<T, C>::operator=(mutanstack);

        return (*this);
    }

    typedef typename C::iterator	iterator;
    iterator	begin() {
        return this->c.begin();
    }
    iterator	end() {
        return this->c.end();
    }

    typedef typename C::reverse_iterator	reverse_iterator;
    reverse_iterator	rbegin() {
        return this->c.rbegin();
    }
    reverse_iterator	rend() {
        return this->c.rend();
    }
};

#endif