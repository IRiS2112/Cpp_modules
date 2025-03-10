/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:39:20 by hakaraou          #+#    #+#             */
/*   Updated: 2025/02/09 16:26:02 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <string>
# include <sstream>
# include <iostream>
# include <exception>

# define RESET   	"\033[0m"
# define RED		"\033[1;31m"


class	RPN {
		public:
	static void	rpn(const std::string &arg);

	class	Error : public std::exception {
			public:
		Error(const char *error);

		const char	*what() const throw();

			private:
		const char	*_error;
	};

		private:
	int				_result;
	int				_operand1;
	int				_operand2;
	char			_operator;
	std::string		_operation;
	std::stack<int>	_stack;

	RPN();
	RPN(const std::string &operation);
	RPN(const RPN &rpn);
	~RPN();

	RPN	&operator=(const RPN &rpn);

	bool	_checkOperand(const char operand, const char next) const;
	void	_pushStack(const int index);
	bool	_checkOperator(const char operat, const char next) const;
	void	_doOperation(const int index);
	void	_rpnFunction();
};

#endif
