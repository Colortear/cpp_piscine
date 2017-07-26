/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 19:03:25 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/07 20:20:49 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string n, std::string t) : name(n), title(t) {

	std::cout << n << ", " << t << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src) {

	this->name = src.name;
	this->title = src.title;
}

Sorcerer::~Sorcerer(void) {

	std::cout << name << ", " << title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i) {

	o << i.name
