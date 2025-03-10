/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:23:58 by hakaraou          #+#    #+#             */
/*   Updated: 2025/02/09 17:31:31 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av) {
	(void) av;
	if (ac < 3) {
		std::cerr	<< RED << "Error"
					<< RESET << std::endl;
		return (1);
	}

	try {
		PmergeMe::mergeInsertionSort(ac, av);
	} catch (const PmergeMe::Error &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}