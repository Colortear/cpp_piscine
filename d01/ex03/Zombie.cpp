/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:23:13 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/04 19:51:33 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) {

	return ;
}

Zombie::~Zombie(void) {

	return ;
}

void	Zombie::announce(void) {

	std::cout << "<" << this->name << ">"
		<< "Braiiiiiiiinnnnsssss..." << std::endl;
}
