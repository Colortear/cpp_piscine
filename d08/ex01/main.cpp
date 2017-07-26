/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 19:35:30 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/14 19:53:37 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <iostream>

int		main(void)
{
	Span	filled = Span(10000);
	Span	empty = Span(10000);

	srand(time(NULL));
	filled.fillNums();
	for (int i = 0; i < 10000; i++)
		empty.addNumber(rand());
	std::cout << "shortest span for sequesntiall filled is " << filled.shortestSpan() << std::endl;
	std::cout << "longest span for sequentially filled is " << filled.longestSpan() << std::endl;
	std::cout << "shortest span for randomly filled is " << empty.shortestSpan() << std::endl;
	std::cout << "longest span for randomly filled is " << empty.longestSpan() << std::endl;

	return (0);
}

