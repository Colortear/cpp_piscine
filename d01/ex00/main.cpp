/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:25:56 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/04 12:50:30 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.h"
#include <iostream>

void	ponyOnTheStack(void)
{
	Pony	instance = Pony("Pony allocated on the stack", 0);

	std::cout << instance.pony_race_number << std::endl;
	return ;
}

void	ponyOnTheHeap(void)
{
	Pony	*instance = new Pony("Pony is allocated on the heap", 1);

	std::cout << instance->pony_race_number << std::endl;
	delete instance;
	return ;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
