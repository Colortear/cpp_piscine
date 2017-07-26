/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:23:38 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/04 18:52:31 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

#include <iostream>

void	randomChump(std::string name)
{
	Zombie	zombino = Zombie(name, "drone");
	zombino.announce();
}

int		main(void)
{
	std::string names[] = {
		"Peter",
		"Piper",
		"Pepper",
		"Manny",
		"Pipper"
	};
	ZombieEvent	horde;
	int		rand_index;
	Zombie	*zombie;

	rand_index = 0;
	std::cout << "A gaggle of zombies runs down a hill towards you" << std::endl;
	horde.setZombieType("ravenous");
	for (int i = 0; i < 42; i++)
	{
		rand_index = rand() % 4;
		zombie = horde.newZombie(names[rand_index]);
		zombie->announce();
		std::cout << "Mows down zombino with an AK" << std::endl;
		delete zombie;
	}
	for (int j = 0; j < 6; j++)
	{
		std::cout << "Zombo appears from the mist..." << std::endl;
		randomChump(names[rand() % 4]);
		std::cout << "but its legs break under its weight as it trys to chase you"
			<< std::endl << "you leave it to die" << std::endl;
	}
	return (0);
}
