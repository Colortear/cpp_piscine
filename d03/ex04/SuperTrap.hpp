/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:40:20 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/07 00:47:57 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class	SuperTrap : public NinjaTrap, public FragTrap {

	SuperTrap(std::string n);
	SuperTrap(SuperTrap const &src);
	~SuperTrap(void);

	SuperTrap	&operator=(SuperTrap const &src);

};
