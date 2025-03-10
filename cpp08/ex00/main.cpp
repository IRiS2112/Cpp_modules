/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:50:18 by hakaraou          #+#    #+#             */
/*   Updated: 2025/01/19 17:30:22 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	try {
		std::vector<int>	vec;
		vec.push_back(2);
		vec.push_back(6);
		vec.push_back(7);
		vec.push_back(33);
		vec.push_back(64);

		std::cout	<< easyfind(vec, 64)
					<< std::endl;	
	}
	catch(std::exception &e) {
		std::cout	<< e.what()
					<< std::endl;
	}

	try {
		std::deque<int>	dque;
		dque.push_back(2);
		dque.push_back(6);
		dque.push_back(7);
		dque.push_back(33);
		dque.push_back(64);

		std::cout	<< easyfind(dque, 640)
					<< std::endl;	
	}
	catch(std::exception &e) {
		std::cout	<< e.what()
					<< std::endl;
	}

	try {
		std::list<int>	d;
		std::cout	<< easyfind(d, 10)
					<< std::endl;	
	}
	catch(std::exception &e) {
		std::cout	<< e.what()
					<< std::endl;
	}

	try {
		std::forward_list<int>	flist;
		flist.push_front(10);
		flist.push_front(20);
		flist.push_front(30);
		flist.push_front(15);
		std::cout	<< easyfind(flist, 10)
					<< std::endl;	
	}
	catch(std::exception &e) {
		std::cout	<< e.what()
					<< std::endl;
	}

	try {
		std::array<int, 3>	arr = {1, 2, 3};
		std::cout	<< easyfind(arr, 10)
					<< std::endl;
	}
	catch(std::exception &e) {
		std::cout	<< e.what()
					<< std::endl;
	}
}
