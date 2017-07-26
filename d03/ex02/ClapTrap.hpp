/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 21:12:31 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 22:55:24 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class	ClapTrap {

public:

	ClapTrap(void);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);

	int			meleeAttack(std::string const &target);
	int			rangedAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	ClapTrap	&operator=(ClapTrap const &rhs);

	int			HP;
	int			energyPoint;
	std::string	name;

	int			maxHP;
	int			maxEnergy;
	int			level;
	int			MAD;
	int			RAD;
	int			ADR;

};

#endif
