/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:03:37 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/01 11:01:53 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cctype>
# include <sstream>
# include <string>
# include <iomanip> 

class ScalarConverter {
		private:
	const char		_c;
	const int		_i;
	const float		_f;
	const double	_d;

	ScalarConverter();
	ScalarConverter(char c, int i, float f, double d);
	ScalarConverter(const ScalarConverter &scalarconverter);
	~ScalarConverter();

	ScalarConverter	&operator=(const ScalarConverter &scalarconverter);

	void	_printChar();
	void	_printInt(bool imp);
	void	_printFloat(bool imp);
	void	_printDouble(bool imp);

	static int _isNaN(const std::string &str);
	static int _isInfP(const std::string &str);
	static int _isInfN(const std::string &str);
	static int _isChar(const std::string &str);
	static int _isInt(const std::string &str);
	static int _isFloat(const std::string &str);
	static int _isDouble(const std::string &str);
	
		public:
	static void	convert(std::string str);
};

#endif