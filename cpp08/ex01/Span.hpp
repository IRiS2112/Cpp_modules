/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:52:02 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/19 17:31:38 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>
# include <exception>

class	Span {
		private:
	unsigned int		_n;
	std::vector<int>	_vec;

		public:
	Span();
	Span(unsigned int n);
	Span(const Span &span);
	~Span();

	Span	&operator=(const Span &span);

	void	addNumber(const int value);
	int		shortestSpan();
	int		longestSpan();
	void	vecGenerate();

	class LengthError : public std::exception {
		public:
			const char	*what() const throw();
	};

	class LogicError : public std::exception {
		public:
			const char	*what() const throw();
	};

	std::vector<int>	getVec() const;
};

#endif