/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:49:14 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 22:43:26 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class	ScavTrap {

public:

	ScavTrap(std::string const n);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);

	int			HP;
	int			energyPoints;
	std::string	name;

	int			meleeAttack(std::string const &target);
	int			rangedAttack(std::string const &target);
	void		challengeNewcomer(void);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	ScavTrap	&operator=(ScavTrap const &rhs);

private:

	int			_maxHP;
	int			_maxEnergy;
	int			_level;
	int			_MAD;
	int			_RAD;
	int			_ADR;

};

#endif
