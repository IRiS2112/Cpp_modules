/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:50:18 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/21 12:29:23 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() { {
		std::cout	<< "__________________ basic MutantStack container __________________"
					<< std::endl;

		MutantStack<int>	mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout	<< "top : " << mstack.top()
					<< std::endl;

		mstack.pop();

		std::cout	<< "size : " << mstack.size()
					<< std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(7);
		mstack.push(737);
		mstack.push(798);
		mstack.push(234);
		mstack.push(0);

		MutantStack<int>::iterator	it = mstack.begin();
		MutantStack<int>::iterator	ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;

		std::stack<int> s(mstack);
	} {
		std::cout	<< "___________________ Int MutantStack container ___________________"
					<< std::endl;

		MutantStack<int>	MS;
		int	arr[] = {4, 23, 3, 4, 5, 23, 76, 8, 8, 5, 7, 8};
		for (size_t i = 0; i < sizeof(arr) / sizeof(*arr); i++)
			MS.push(*(arr + i));

		std::cout	<< "MS size : " << MS.size()
					<< std::endl
					<< "Ms top : " << MS.top()
					<< std::endl;

		std::cout << "Printing MS using an iterator :";
		for (MutantStack<int>::iterator iter = MS.begin(); iter != MS.end(); iter++) {
			std::cout << " " << *iter;
		}
		std::cout << std::endl;

		std::cout << "Printing MS using a reverse iterator :";
		for (MutantStack<int>::reverse_iterator iter = MS.rbegin(); iter != MS.rend(); iter++) {
			std::cout << " " << *iter;
		}
		std::cout << std::endl;

		std::cout << "Poping 6 elements : ";
		for (int i = 0; i < 6; i++) {
			MS.pop();
		}
	
		for (MutantStack<int>::iterator iter = MS.begin(); iter != MS.end(); iter++) {
			std::cout << " " << *iter;
		}
		std::cout << std::endl;

		std::cout << "Using the copy assignement operator to create a new MS :";
		MutantStack<int> newMS = MS;
		for (MutantStack<int>::iterator iter = newMS.begin(); iter != newMS.end(); iter++) {
			std::cout << " " << *iter;
		}
		std::cout << std::endl;
	}
	return (0);
}
