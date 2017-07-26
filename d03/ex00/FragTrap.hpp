/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:31:35 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 22:26:46 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class	FragTrap {

public:

	FragTrap(std::string n);
	FragTrap(FragTrap const &fragboy);
	~FragTrap(void);
	
	int			HP;
	int			energyPoints;
	std::string	name;

	int			meleeAttack(std::string const &target);
	int			rangedAttack(std::string const &target);
	int			vaulthunter_dot_exe(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	FragTrap	&operator=(FragTrap const &lhs);

private:

	int const	_maxHP;
	int const	_maxEnergy;
	int			_level;
	int const	_MAD; // Melee Attack Damage
	int const	_RAD; // Ranged Attack Damage
	int const	_ADR; // Armor Damage Reduction
};

#endif
