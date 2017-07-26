/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:31:14 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 22:40:42 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "FragTrap.hpp"

namespace	attacks {

	std::string	attack_list[5] = {
		"Lazer Dance",
		"Ninja Step",
		"Bustin' Kick",
		"Savvy Engineering",
		"Eat this..."
	};
	int			attack_dmgs[5] = {35, 40, 37, -40, 105};
}

FragTrap::FragTrap(std::string n) : HP(100), energyPoints(100), _maxHP(100),
	_maxEnergy(100), _level(1), name(n), _MAD(30), _RAD(20), _ADR(5) {

	std::cout << this->name << " appears from the mist" << std::endl;
	HP = 100;
	energyPoints = 100;
}

FragTrap::~FragTrap(void) {

	std::cout << this->name << " shuting down.... forever" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : HP(src.HP), energyPoints(src.energyPoints),
	_maxHP(src._maxHP), _maxEnergy(src._maxEnergy), _level(src._level),
	name(src.name), _MAD(src._MAD), _RAD(src._RAD), _ADR(src._ADR) {

}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {

	HP = rhs.HP;
	energyPoints = rhs.energyPoints;
	_level = rhs._level;
	name = rhs.name;
	return (*this);
}

int		FragTrap::rangedAttack(std::string const &target) {

	int		ret;

	ret = 0;
	if (this->HP == 0)
		std::cout << this->name << " is dead" << std::endl;
	else
	{
		ret = this->_MAD;
		std::cout << this->name << " hits " << target << " with ranged attack, causing "
			<< _RAD << " points of damage" << std::endl;
	}
	return (this->_RAD);
}

int		FragTrap::meleeAttack(std::string const &target) {
	
	int		ret;

	ret = 0;
	if (this->HP == 0)
		std::cout << this->name << " is dead" << std::endl;
	else
	{
		ret = this->_MAD;
		std::cout << this->name << " hits " << target << " with melee attack, causing "
			<< _MAD << " points of damage to " << target << std::endl;
	}
	return (ret);
}

int		FragTrap::vaulthunter_dot_exe(std::string const &target) {

	int		ret;
	int		index;

	ret = 0;
	index = time(NULL) % 5;
	if (this->HP == 0)
		std::cout << this->name << " is dead." << std::endl;
	else if (this->energyPoints < 25)
		std::cout << "Not enough energy" << std::endl;
	else
	{
		std::cout << this->name << " calls upon the vaulthunter" << std::endl;
		this->energyPoints -= 25;
		ret = attacks::attack_dmgs[index];
		if (ret < 0)
		{
			std::cout << "The vaulthunter calls upon " << attacks::attack_list[index]
				<< ", a benevolent engineering power" << std::endl;
			beRepaired(ret * -1);
			ret = 0;
		}
		else
		{
			std::cout << attacks::attack_list[index] << " does " << ret
				<< " damage to " << target << std::endl;
		}
	}
	return (ret);
}

void	FragTrap::takeDamage(unsigned int amount) {

	if ((int)amount > this->_ADR)
		amount = (int)amount - this->_ADR;
	else
		amount = 0;
	std::cout << "Armor damage reduction is: " << this->_ADR << std::endl;
	std::cout << this->name << " takes " << amount << " damage" << std::endl;
	this->HP -= (int)amount;
	if (this->HP < 0)
		this->HP = 0;
	if (this->HP == 0)
		std::cout << this->name << " has been massacred" << std::endl;
	else
		std::cout << this->name << " HP: " << this->HP << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {

	if (this->HP == this->_maxHP)
		std::cout << this->name << "'s HP is already full" << std::endl;
	else
	{
		this->HP += amount;
		if (this->HP > this->_maxHP)
			this->HP = this->_maxHP;
		std::cout << this->name << " has recovered " << amount << " HP" << std::endl;
	}
}
