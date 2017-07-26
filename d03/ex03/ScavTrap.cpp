/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:06:01 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 22:59:39 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

namespace	challenger {

	std::string	challengers[5] = {
		"A shadowy figure",
		"Sire Lancelout",
		"The ground",
		"A floating ruby speaking in whispers",
		"A black hole"
	};
	std::string	attacked[5] = {
		"The shadowy figure darts around wildly",
		"Sire Lancelout yelps and grabs his behind",
		"Some dust clouds the air",
		"The red jewel cracks and lets out and ear-piercing screech",
		"Everything in the surrounding starts to bend in on itself"
	};
	std::string attacks[5] = {
		"The shadowy figure whips a tendril of darkness towards its opponent",
		"Sire Lancelout points snubs kicks rocks and dirt into his opponents face",
		"The ground remains as it always has been",
		"The jewel casts a blinding light over everything",
		"It consumes all"
	};
	std::string death[5] = {
		"The shadowy figure dissipates into thin air",
		"Sire Lancelout keels over and lets out a death gasp \
			(while not looking he dissapears over the hills and far away)",
		"Now that we are at the center of the earth, what now?",
		"The blood jewel shatters into a million shards. What a spectacle",
		"This is not possible"
	};

	int			attackDmg[5] = {15, 2, 0, 50, INT_MAX};
	int			HP[5] = {43, 100, INT_MAX, 1, 200};

};


ScavTrap::ScavTrap(std::string n) {

	HP = 100;
	energyPoint = 50;
	name = n;
	maxHP = 100;
	maxEnergy = 50;
	level = 1;
	MAD = 20;
	RAD = 15;
	ADR = 3;
	std::cout << this->name << " stands idly at the door" << std::endl;
}

ScavTrap::~ScavTrap(void) {

	std::cout << this->name << " shuting down.... forever" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) {

	*this = src;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {

	HP = rhs.HP;
	energyPoint = rhs.energyPoint;
	name = rhs.name;
	maxHP = rhs.maxHP;
	maxEnergy = rhs.maxEnergy;
	level = rhs.level;
	MAD = rhs.MAD;
	RAD = rhs.RAD;
	ADR = rhs.ADR;
	return (*this);
}

void	ScavTrap::challengeNewcomer(void) {

	int			attack_dmg;
	int			HP;
	int			index;
	static int	which = 0;

	index = time(NULL) % 5;
	std::cout << challenger::challengers[index] << " appears" << std::endl;
	HP = challenger::HP[index];
	while(HP > 0 && this->HP > 0)
	{
		if (which == 0)
		{
			HP -= meleeAttack(challenger::challengers[index]);
			which++;
		}
		else
		{
			HP -= rangedAttack(challenger::challengers[index]);
			which--;
		}
		if (HP <= 0)
			std::cout << challenger::death[index] << std::endl;
		else
		{
			std::cout << challenger::attacked[index] << std::endl;
			std::cout << challenger::attacks[index] << std::endl;
			takeDamage(challenger::attackDmg[index]);
		}
	}
	if (this->HP == 0)
		std::cout << this->name << " has been vanquished" << std::endl;
}
