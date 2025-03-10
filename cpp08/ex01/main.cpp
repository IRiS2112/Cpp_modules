/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:50:18 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/21 12:29:47 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try {
        Span	sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout	<< "Shortest span:\t" << sp.shortestSpan()
					<< std::endl
					<< "Longest span:\t" << sp.longestSpan()
					<< std::endl;

		std::vector<int>	vec = sp.getVec();
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Span	sp(10000);
		sp.vecGenerate();

        std::cout	<< "Shortest span:\t" << sp.shortestSpan()
					<< std::endl
					<< "Longest span:\t" << sp.longestSpan()
					<< std::endl;

		std::vector<int>	vec = sp.getVec();
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}