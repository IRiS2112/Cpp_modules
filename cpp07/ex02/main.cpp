/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:31:11 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/10 18:08:38 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void ) {
	Array<int>			*iArr = new Array<int>(3);
	Array<double>		dArr(5);
	Array<float>		fArr(0);
	Array<std::string>	sArr(2);

	try {
		for (unsigned int i = 0; i < iArr->size(); i++)
			(*iArr)[i] = i * 4;
	
		for (unsigned int i = 0; i < dArr.size(); i++)
			dArr[i] = i * 2 + 0.5;
	
		std::cout	<< "size: " << iArr->size()
					<< std::endl << "Elements: ";
		for (unsigned int i = 0; i < iArr->size(); i++) {
			std::cout << (*iArr)[i] << " ";
		}
		std::cout	<< std::endl
					<< "size: " << dArr.size()
					<< std::endl << "Elements: ";
		for (unsigned int i = 0; i < dArr.size(); i++) {
			std::cout	<< dArr[i] << " ";
		}
		std::cout	<< std::endl;

		sArr[0] = "\033[1;32mhello";
		sArr[1] = "ABC\033[0m";
		std::cout	<< sArr[0] << " " << sArr[1]
					<< std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what();
	}

	delete iArr;

    Array<int>	numbers(750);
    int			*mirror = new int[750];

    srand(time(NULL));
    for (int i = 0; i < 750; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    for (int i = 0; i < 750; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cerr << "the same value." << std::endl;
	
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    try {
        numbers[-2] = 0;
    } catch(const std::exception &e) {
        std::cerr << e.what();
    }

    try {
        numbers[750] = 0;
    } catch(const std::exception &e) {
        std::cerr << e.what();
    }

    delete[] mirror;

    return 0;
}
