/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:23:13 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/04 18:25:20 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string n, std::string t) : _name(n), _type(t) {

	return ;
}

Zombie::~Zombie(void) {

	return ;
}

void	Zombie::announce(void) {

	std::cout << "<" << this->_name << "(" << this->_type << ")" << ">"
		<< "Braiiiiiiiinnnnsssss..." << std::endl;
}
