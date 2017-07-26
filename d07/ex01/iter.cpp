/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:27:10 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/13 17:26:54 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template	<typename pingouin>
void		iter(pingouin *arr, int len, void (*f)(pingouin const &el)) {

	int		i;

	for  (i = 0; i < len; i++)
		f(arr[i]);
}

template	<typename T>
void		printNeg(T el)
{
	if (el < 0)
		std::cout << el << std::endl;
}

int		main(void)
{
	int		arr[10] = {1, 2, 3, -4, -5, -6, 7, 8, 9, 10};
	int		i;

	iter(arr, 10, &printNeg);

	return (0);
}
