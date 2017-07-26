/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:23:23 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/04 18:53:04 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {

	return ;
}

ZombieEvent::~ZombieEvent(void) {

	return ;
}

void	ZombieEvent::setZombieType(std::string t) {

	this->type = t;
	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name) {

	Zombie	*zombo = new Zombie(name, this->type);
	return (zombo);
}
