/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyClasses.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 22:35:56 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/02 23:17:43 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MyClasses.h"

Contact::PrintEntry (void) {
	std::cout << "first name: " << this->first_name << endl;
	std::cout << "last name: " << this->last_name << endl;
	std::cout << "nickname: " << this->nickname << endl;
	std::cout << "login: " << this->login << endl;
	std::cout << "postal address: " << this->address << endl;
	std::cout << "email address: " << this->email << endl;
	std::cout << "phone number: " << this->email << endl;
	std::cout << "birthdate date: " << this->birthday << endl;
	std::cout << "favorite meal: " << this->fave_meal << endl;
	std::cout << "underwear color: " << this->undies_color << endl;
	std::cout << "darkest secret: " << this->darkest_string << endl;
}

Phonebook::Phonebook (void) {
	this->slots->left = 0;
	return ;
}

Phonebook::~Phonebook (void) {
	return ;
}

Phonebook::SearchContact (int index) {
	std::cin >> 
	Contact[index].PrintEntry();
}

Phonebook::AddContact (void) {

	if (this->slotsleft < 8)
	{
		this->slots_left++;
	}
	else
		std::cout << "PLS STOP IT HURTS!" << std::endl;
}

