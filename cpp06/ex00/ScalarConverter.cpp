/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:21:06 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/01 12:42:39 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : _c('\0'), _i(0), _f(0.0f), _d(0.0) {
}

ScalarConverter::ScalarConverter(char c, int i, float f, double d) : _c(c), _i(i), _f(f), _d(d) {
}

ScalarConverter::ScalarConverter(const ScalarConverter &scalarconverter) :
	_c(scalarconverter._c), _i(scalarconverter._i), _f(scalarconverter._f), _d(scalarconverter._d) {
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &scalarconverter) {
	(void)scalarconverter;
	return (*this);
}

int	ScalarConverter::_isNaN(const std::string &str) {
	return (!(str == "nan" || str == "-nan" || str == "+nan" || str == "nanf" || str == "+nanf" || str == "-nanf"));
}

int	ScalarConverter::_isInfP(const std::string &str) {
	return (!(str == "+inf" || str == "+inff" || str == "inf" || str == "inff"));
}

int	ScalarConverter::_isInfN(const std::string &str) {
	return (!(str == "-inf" || str == "-inff"));
}

int	ScalarConverter::_isChar(const std::string &str) {
	return (!(str.length() == 1 && isprint(str[0]) && !isdigit(str[0])));
}

int	ScalarConverter::_isInt(const std::string &str) {
	size_t	i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!isdigit(str[i]))
		return (1);
	while (i < str.length() && isdigit(str[i]))
		i++;

	return (i != str.length());
}

int	ScalarConverter::_isFloat(const std::string &str) {
	size_t	i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!isdigit(str[i]))
		return (1);
	while (i < str.length() && isdigit(str[i]))
		i++;
	if (str[i] == '.')
		i++;
	else
		return (1);
	while (i < str.length() && isdigit(str[i]))
		i++;
	if (str[i] == 'f')
		i++;
	else
		return (1);

	return (i != str.length());
}

int	ScalarConverter::_isDouble(const std::string &str) {
	size_t	i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!isdigit(str[i]))
		return (1);
	while (i < str.length() && isdigit(str[i]))
		i++;
	if (str[i] == '.')
		i++;
	else
		return (1);
	while (i < str.length() && isdigit(str[i]))
		i++;

	return (i != str.length());
}

void	ScalarConverter::_printChar() {
	std::cout	<< "char: '" << _c << "'\nint: "  << _i << std::fixed << std::setprecision(1)
				<< "\nfloat: " << _f << "f\ndouble: " << _d << std::endl;
}

void	ScalarConverter::_printInt(bool imp) {
	if (isprint(_c) && _i <= 127 && _i >= -128)
		std::cout	<< "char: '" << _c  << "'" << std::endl;
	else if (imp || _i > 127 || _i < -128)
		std::cout	<< "char: " << "impossible" << std::endl;
	else
		std::cout	<< "char: " << "Non displayable" << std::endl;
	(imp)	? std::cout	<< "int: " << "impossible\nfloat: impossible\ndouble: impossible" << std::endl
			: std::cout	<< "int: "  << _i << std::fixed << std::setprecision(1)
						<< "\nfloat: " << _f << "f\ndouble: " << _d << std::endl;
}

void	ScalarConverter::_printFloat(bool imp) {
	if (isprint(_c) && _f <= 127 && _f >= -128)
		std::cout << "char: '" << _c  << "'" << std::endl;
	else if (imp || _f > 127 || _f < -128)
		std::cout	<< "char: impossible" << std::endl;
	else
		std::cout	<< "char: Non displayable" << std::endl;
	if (imp)
		std::cout	<< "int: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
	else {
		(_f < -2147483648 || _f > 2147483647)	? std::cout	<< "int: " << "impossible" << std::endl
												: std::cout	<< "int: "  << _i << std::endl;
		std::cout	<< std::fixed << std::setprecision(1)
					<< "float: " << _f << "f\ndouble: " << _d << std::endl;
	}
}

void	ScalarConverter::_printDouble(bool imp) {
	if (isprint(_c) && _d <= 127 && _d >= -128)
		std::cout	<< "char: '" << _c  << "'" << std::endl;
	else if (imp || _d > 127 || _d < -128)
		std::cout	<< "char: impossible" << std::endl;
	else
		std::cout	<< "char: Non displayable" << std::endl;
	if (imp)
		std::cout	<< "int: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
	else {
		(_d < -2147483648 || _d > 2147483647)	? std::cout	<< "int: impossible" << std::endl
												: std::cout	<< "int: "  << _i << std::endl;
		std::cout	<< std::fixed << std::setprecision(1)
					<< "float: " << _f << "f\ndouble: " << _d << std::endl;
	}
}

void	ScalarConverter::convert(std::string str) {
	if (!_isNaN(str))
		std::cout	<< "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
	else if (!_isInfP(str))
		std::cout	<< "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
	else if (!_isInfN(str))
		std::cout	<< "char: impossible\nint: mpossible\nfloat: -inff\ndouble: -inf" << std::endl;

	else if (!_isChar(str)) {
		ScalarConverter c(str[0], static_cast<int>(str[0]), static_cast<float>(str[0]), static_cast<double>(str[0]));
		c._printChar();
	}

	else if (!_isInt(str)) {
		std::stringstream ss(str); int num; ss >> num;
		bool imp = ss.fail();
		ScalarConverter i(static_cast<char>(num), num, static_cast<float>(num), static_cast<double>(num));
		i._printInt(imp);
	}

	else if (!_isFloat(str)) {
		str.erase(str.size() - 1);
		std::stringstream ss(str); float numf; ss >> numf;
		bool imp = ss.fail();
		ScalarConverter f(static_cast<char>(numf), static_cast<int>(numf), numf, static_cast<double>(numf));
		f._printFloat(imp);
	}

	else if (!_isDouble(str)) {
		std::stringstream ss(str); double numd; ss >> numd;
		bool imp = ss.fail();
		ScalarConverter d(static_cast<char>(numd), static_cast<int>(numd), static_cast<float>(numd), numd);
		d._printDouble(imp);
	}

	else
		std::cerr	<< "Invalide input!"
					<< std::endl;
}
