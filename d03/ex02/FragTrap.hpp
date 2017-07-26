/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:31:35 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 22:48:01 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {

public:

	FragTrap(std::string n);
	FragTrap(FragTrap const &fragboy);
	~FragTrap(void);

	int			vaulthunter_dot_exe(std::string const &target);
	FragTrap	&operator=(FragTrap const &rhs);

};

#endif
