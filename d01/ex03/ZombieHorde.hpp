/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:10:50 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 13:52:55 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class	ZombieHorde {

public:

	ZombieHorde(int N);
	~ZombieHorde(void);

	void	announce(void);

	Zombie	*zombies;
	int		number_zombies;
};

#endif
