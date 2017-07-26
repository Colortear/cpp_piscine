/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:16:39 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/04 21:36:15 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Brain.hpp"

Brain::Brain(void) {

	return ;
}

Brain::~Brain(void) {

	return ;
}

std::string	Brain::identify(void) {

	const void *a = static_cast<const void*>(this);
	std::stringstream ss;
	ss << a;
	std::string name = ss.str();
	return (name);
}
