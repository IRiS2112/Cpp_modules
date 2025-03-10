/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:41:30 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/31 19:23:49 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av) {
	if (ac != 4 || (!av[1][0] || !av[2][0] || !av[3][0])) {
		std::cerr	<< "Wrong input!"
					<< std::endl;
		return (-1);
	}

	Sed sed(av[1], av[2], av[3]);

	if (sed.replaceInFile() == -1)
		return (-1);
	return (0);
}
