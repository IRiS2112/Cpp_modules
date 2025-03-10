/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:08:07 by hakaraou          #+#    #+#             */
/*   Updated: 2025/02/09 16:06:46 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr	<< RED << "Error: bad input"
					<< RESET << std::endl;
		return (1);
	}

	try {
		BitcoinExchange::btc(av[1]);
	} catch (const BitcoinExchange::Error &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}