/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:04:36 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/07 00:19:46 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap {

public:

	NinjaTrap(std::string n);
	NinjaTrap(NinjaTrap const &src);
	~NinjaTrap(void);

	void		ninjaShoebox(FragTrap const &clap);
	void		ninjaShoebox(ScavTrap clap);
	void		ninjaShoebox(NinjaTrap const &clap);

	NinjaTrap	&operator=(NinjaTrap const &rhs);

};

#endif
