/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:31:39 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/30 14:50:43 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av) {
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++) {
		for (int j = 0; av[i][j]; j++) {
			if (islower(av[i][j]))
				av[i][j] = toupper(av[i][j]);
			std::cout << av[i][j];
		}
	}
	std::cout << std::endl;
}
