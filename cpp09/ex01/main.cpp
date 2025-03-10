/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:49:44 by hakaraou          #+#    #+#             */
/*   Updated: 2025/02/09 16:15:37 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr	<< RED << "Error"
					<< RESET << std::endl;
		return (1);
	}
	try {
		RPN::rpn(av[1]);
	} catch (const RPN::Error &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}