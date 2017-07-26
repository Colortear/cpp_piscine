/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:11:16 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/04 12:49:22 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Pony.h"

Pony::Pony(std::string text, int number) : pony_race_number(number) {

	std::cout << text << std::endl;
	std::cout << "Pony race number is: " << this->pony_race_number << std::endl;
	return ;
}

Pony::~Pony(void) {

	std::cout << "Pony deconstructed" << std::endl;
	return ;
}
