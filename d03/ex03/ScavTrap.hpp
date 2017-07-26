/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:49:14 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 22:50:17 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

public:

	ScavTrap(std::string const n);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);

	void		challengeNewcomer(void);

	ScavTrap	&operator=(ScavTrap const &rhs);

};

#endif
