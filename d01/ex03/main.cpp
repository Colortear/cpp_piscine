/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:23:38 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/04 20:04:52 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

#include <iostream>

int		main(void)
{
	ZombieHorde	horde(50);

	std::cout << "the horde is approaching" << std::endl;
	horde.announce();
	std::cout << "mow them all down" << std::endl;
	return (0);
}
