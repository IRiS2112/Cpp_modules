/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:39:32 by hakaraou          #+#    #+#             */
/*   Updated: 2025/02/09 16:25:49 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : _operation() {
}

RPN::RPN(const RPN &rpn) : _operation(rpn._operation) {
	(void)rpn;
}

RPN::~RPN() {
}

RPN	&RPN::operator=(const RPN &rpn) {
	(void)rpn;
	return (*this);
}

RPN::Error::Error(const char *error) : _error(error) {
};

const char	*RPN::Error::what() const throw() {
	return (_error);
}

bool	RPN::_checkOperand(const char operand, const char next) const {
	return (std::isdigit(operand) && next && next == ' ');
}

void	RPN::_pushStack(const int index) {
	std::stringstream num(_operation.substr(index, 1));
	(num >> _operand1)	? _stack.push(_operand1)
						: throw Error("\033[1;31mError\033[0m");

	return ;
}

bool	RPN::_checkOperator(const char operat, const char next) const {
	return ((operat == '+' || operat == '-' || operat == '*' || operat == '/')
			&& (!next || (next && next == ' '))
			&& _stack.size() > 1);
}

void	RPN::_doOperation(const int index) {
	_operand2 = _stack.top();
	_stack.pop();
	_operand1 = _stack.top();
	_stack.pop();

	_operator = _operation[index];
	if (_operator == '+')
		_result = _operand1 + _operand2;
	else if (_operator == '-')
		_result = _operand1 - _operand2;
	else if (_operator == '*')
		_result = _operand1 * _operand2;
	else if (_operator == '/')
		(_operand2)	? _result = _operand1 / _operand2
					: throw Error("\033[1;31mError\033[0m");

	_stack.push(_result);

	return ;
}

void	RPN::_rpnFunction() {
	for (size_t i = 0; i < _operation.size(); i++) {
		if (_checkOperand(_operation[i], _operation[i + 1]))
			_pushStack(i);

		else if (_checkOperator(_operation[i], _operation[i + 1]))
			_doOperation(i);

		else if (_operation[i] == ' ')
			continue ;
		else
			throw Error("\033[1;31mError\033[0m");
	}

	if (_stack.size() != 1)
		throw Error("\033[1;31mError\033[0m");
	std::cout << _result << std::endl;

	return ;
}

void	RPN::rpn(const std::string &arg) {
	RPN	rpn;

	rpn._operation = arg;
	rpn._rpnFunction();
}