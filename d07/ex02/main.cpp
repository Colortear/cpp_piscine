/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:35:14 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/13 20:26:53 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void)
{
	Array<int>	test0;
	Array<int>	test1(15);
	Array<int>	test2(15);
	int			i;
	int			len0;
	int			len1;
	int			len2;
	int			container;

	len0 = test0.size();
	len1 = test1.size();
	len2 = test2.size();
	for (i = 0; i < len1; i++)
		test1[i] = len1 - i;
	for (i = 0; i < len2; i++)
		test2[i] = i;

	try {
	container = test2[len2 + 10];
	container = test1[len1 + 10];
	}
	catch (std::exception &e) {};

	for (i = 0; i < len1; i++)
		std::cout << test1[i] << std::endl;
	for (i = 0; i < len2; i++)
		std::cout << test2[i] << std::endl;
	test2 = test1;
	test2[4] = 100;
	std::cout << test1[4] << std::endl;

	return (0);
}
