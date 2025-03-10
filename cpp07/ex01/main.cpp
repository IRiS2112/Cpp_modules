/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:31:11 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/10 15:22:38 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
	std::string a[] = {"65", "66", "67", "68", "69"};

	std::cout << "Original array:\t";
    for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        std::cout << '"' << a[i] << '"' << " ";
    std::cout << std::endl;

	iter(a, sizeof(a) / sizeof(a[0]), func<std::string>);

	std::cout << "Modified array:\t";
    for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        std::cout << '"' << a[i] << '"' << " ";
    std::cout << std::endl;

	return (0);
}