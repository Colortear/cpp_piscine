/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 21:12:23 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 23:01:07 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

ClapTrap::ClapTrap(void) {

	std::cout << "The traps have been made" << std::endl;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "The traps have been dismantled" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) : HP(src.HP), energyPoint(src.energyPoint),
	maxHP(src.maxHP), maxEnergy(src.maxEnergy), level(src.level),
	name(src.name), MAD(src.MAD), RAD(src.RAD), ADR(src.ADR) {

}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {

	HP = rhs.HP;
	energyPoint = rhs.energyPoint;
	level = rhs.level;
	name = rhs.name;
	return (*this);
}

int		ClapTrap::rangedAttack(std::string const &target) {

	int		ret;

	ret = 0;
	if (this->HP == 0)
		std::cout << this->name << " is dead" << std::endl;
	else
	{
		ret = this->MAD;
		std::cout << this->name << " hits " << target << " with ranged attack, causing "
			<< RAD << " points of damage" << std::endl;
	}
	return (this->RAD);
}

int		ClapTrap::meleeAttack(std::string const &target) {
	
	int		ret;

	ret = 0;
	if (this->HP == 0)
		std::cout << this->name << " is dead" << std::endl;
	else
	{
		ret = this->MAD;
		std::cout << this->name << " hits " << target << " with melee attack, causing "
			<< MAD << " points of damage to " << std::endl;
	}
	return (ret);
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if ((int)amount > this->ADR)
		amount = (int)amount - this->ADR;
	else
		amount = 0;
	std::cout << "Armor damage reduction is: " << this->ADR << std::endl;
	std::cout << this->name << " takes " << amount << " damage" << std::endl;
	this->HP -= (int)amount;
	if (this->HP < 0)
		this->HP = 0;
	if (this->HP == 0)
		std::cout << this->name << " has been massacred" << std::endl;
	else
		std::cout << this->name << " HP: " << this->HP << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->HP == this->maxHP)
		std::cout << this->name << "'s HP is already full" << std::endl;
	else
	{
		this->HP += amount;
		if (this->HP > this->maxHP)
			this->HP = this->maxHP;
		std::cout << this->name << " has recovered " << amount << " HP" << std::endl;
	}
}
