/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:31:14 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 23:32:41 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

namespace	attacks {

	}

FragTrap::FragTrap(std::string n) {

	HP = 100;
	maxHP = 100;
	energyPoint = 100;
	maxEnergy = 100;
	level = 1;
	name = n;
	MAD = 30;
	RAD = 20;
	ADR = 5;
	std::cout << this->name << " appears from the mist" << std::endl;
}

FragTrap::~FragTrap(void) {

	std::cout << this->name << " shuting down.... forever" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) {

	*this = src;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {

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

int		FragTrap::vaulthunter_dot_exe(std::string const &target) {

	int		ret;
	int		index;
	std::string	attack_list[5] = {
		"Lazer Dance",
		"Ninja Step",
		"Bustin' Kick",
		"Savvy Engineering",
		"Eat this..."
	};
	int			attack_dmgs[5] = {35, 40, 37, -40, 105};

	ret = 0;
	index = time(NULL) % 5;
	if (this->HP == 0)
		std::cout << this->name << " is dead." << std::endl;
	else if (this->energyPoint < 25)
		std::cout << "Not enough energy" << std::endl;
	else
	{
		std::cout << this->name << " calls upon the vaulthunter" << std::endl;
		this->energyPoint -= 25;
		ret = attack_dmgs[index];
		if (ret < 0)
		{
			std::cout << "The vaulthunter calls upon " << attack_list[index]
				<< ", a benevolent engineering power" << std::endl;
			beRepaired(ret * -1);
			ret = 0;
		}
		else
		{
			std::cout << attack_list[index] << " does " << ret
				<< " damage to " << target << std::endl;
		}
	}
	return (ret);
}
