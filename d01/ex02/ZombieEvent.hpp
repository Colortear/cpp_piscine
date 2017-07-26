/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:23:32 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 13:52:22 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class	ZombieEvent {

public:

	ZombieEvent(void);
	~ZombieEvent(void);

	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);

	std::string	type;
	std::string	name;
};

#endif
