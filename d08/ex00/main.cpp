/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:17:32 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/14 18:24:48 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	int							array[] = {1, 7, 8, 10};
	std::list<int>				myList(array, array + 4);
	std::vector<int>			myVector(array, array + 4);
	std::list<int>::iterator	itl;
	std::vector<int>::iterator	itv;

	try {

		itl = easyfind(myList, 8);
		itl = easyfind(myList, 10);
		std::cout << "int in list was found" << std::endl;
	}
	catch (std::exception &e) {

		std::cout << "Could not find integer match" << std::endl;
	}
	try {

		itv = easyfind(myVector, 10);
		std::cout << "int in vector was found" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Could not find integer match" << std::endl;
	}
	return (0);
}
