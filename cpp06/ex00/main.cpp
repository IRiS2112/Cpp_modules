/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:03:36 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/01 11:04:01 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av) {
	if (ac == 2) {
		ScalarConverter::convert(av[1]);
		return (0);
	}

	else
		std::cerr	<< "Invalide input!"
					<< std::endl;
	return (1);
}