/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:03:51 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/07 00:21:53 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(std::string n) {

	HP = 60;
	maxHP = 60;
	energyPoint = 120;
	maxEnergy = 120;
	level = 1;
	name = n;
	MAD = 60;
	RAD = 5;
	ADR = 0;
	std::cout << this->name << " moves swiftly without a sound" << std::endl;
}

NinjaTrap::~NinjaTrap(void) {

	std::cout << this->name << " is no more" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src) {

	*this = src;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs) {

	HP = rhs.HP;
	maxHP = rhs.maxHP;
	energyPoint = rhs.energyPoint;
	maxEnergy = rhs.maxEnergy;
	level = rhs.level;
	name = rhs.name;
	MAD = rhs.MAD;
	RAD = rhs.RAD;
	ADR = rhs.ADR;
	return (*this);
}

void	NinjaTrap::ninjaShoebox(FragTrap const &clap) {

	std::cout << this->name << " takes on anothers name and appearance." << std::endl;
	this->name = clap.name;
}

void	NinjaTrap::ninjaShoebox(ScavTrap clap) {

	std::cout << this->name << " sacrifices another to gain its essence" << std::endl;

	this->HP += clap.HP;
	if (this->HP > 100)
		this->HP = 100;
	clap.HP = 0;
	std::cout << this->name << "'s HP is now " << this->HP << std::endl;
};

void	NinjaTrap::ninjaShoebox(NinjaTrap const &clap) {

	if (this->name.compare(clap.name) == 0)
		std::cout << this->name << " sees themself in the surface of a pond. They contemplate how fleeting life is." << std::endl;
	else
		std::cout << "nothing here" << std::endl;
}
