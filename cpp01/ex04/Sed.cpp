/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:50:08 by hakaraou          #+#    #+#             */
/*   Updated: 2024/08/01 12:43:59 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed() {
}

Sed::Sed(const std::string av1, const std::string av2, const std::string av3) {
	_in_name = av1;
	_s1 = av2;
	_s2 = av3;
}

Sed::~Sed() {
}

int	Sed::replaceInFile(void) {
	std::ofstream	outfile;
	std::ifstream	infile;
	std::string		out_name(_in_name + ".replace");

	infile.open(_in_name);
	if (!infile.is_open()) {
		std::cerr	<< "Failed to open the file!"
					<< std::endl;
		return (-1);
	}

	outfile.open(out_name);
	if (!outfile.is_open()) {
		std::cerr	<< "Failed to open the file!"
					<< std::endl;
		infile.close();
		return (-1);
	}

	std::string		str;
	if (!std::getline(infile, str, '\0')) {
		infile.close();
		outfile.close();
		return (-1);
	}

	std::size_t		found = str.find(_s1);
	if (found == std::string::npos) {
		std::cerr	<< "s1 not found!"
					<< std::endl;
		infile.close();
		outfile.close();
		return (-1);
	}

	while (found != std::string::npos) {
		str.erase(found, _s1.length());
		str.insert(found, _s2);
		found = str.find(_s1, found + _s2.length());
	}

	outfile		<< str;
	std::cout	<< "Successfully wrote to " << out_name << "!"
				<< std::endl;
	infile.close();
	outfile.close();

	return (0);
}