/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:16:52 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/04 21:35:44 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
#include "Human.hpp"

Human::Human(void) {
	std::cout << "constructed Human" << std::endl;
	this->brain = Brain();
}

Human::~Human(void) {
	std::cout << "decontrcuted Human" << std::endl;
}

std::string	Human::identify(void) {

	return (this->brain.identify());
}

Brain	&Human::getBrain(void) {

	return (this->brain);
}
