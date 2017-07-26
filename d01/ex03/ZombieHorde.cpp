/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:17:38 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/04 20:05:48 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int N) : number_zombies(N) {

	std::string names[] = {
		"zambo",
		"Zombano",
		"Zomborina",
		"Zombonyo"
	};
	this->zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		this->zombies[i].name = names[rand() % 3];
	return ;
}

ZombieHorde::~ZombieHorde(void) {

	delete [] this->zombies;
	return ;
}

void	ZombieHorde::announce(void) {

	for (int i = 0; i < this->number_zombies; i++)
		this->zombies[i].announce();
};
