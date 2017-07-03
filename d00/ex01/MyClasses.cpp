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
#include <iomanip>
#include "MyClasses.h"

void	Contact::PrintEntry (void) {

	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "login: " << this->login << std::endl;
	std::cout << "postal address: " << this->address << std::endl;
	std::cout << "email address: " << this->email << std::endl;
	std::cout << "phone number: " << this->phone << std::endl;
	std::cout << "birthday date: " << this->birthday << std::endl;
	std::cout << "favorite meal: " << this->fave_meal << std::endl;
	std::cout << "underwear color: " << this->undies_color << std::endl;
	std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}

void	Contact::Init(int i) {

	this->index = i + 1;
	std::cout << "first name: ";
	std::cin >> this->first_name;
	std::cout << "last name: ";
	std::cin >> this->last_name;
	Util::Marge(this->first_name, this->last_name);
	std::cout << "nickname: ";
	std::cin >> this->nickname;
	std::cout << "login: ";
	std::cin >> this->login;
	std::cout << "postal address: ";
	std::cin >> this->address;
	std::cout << "email address: ";
	std::cin >> this->email;
	std::cout << "phone number: ";
	std::cin >> this->phone;
	std::cout << "birthday date: ";
	std::cin >> this->birthday;
	std::cout << "favorite meal: ";
	std::cin >> this->fave_meal;
	std::cout << "underwear color: ";
	std::cin >> this->undies_color;
	std::cout << "darkest secret: ";
	std::cin >> this->darkest_secret;
}

void Contact::PromptEntry(void) {
	
	std::cout << std::setw(10) << this->index << std::endl;
	Util::FormatPrint(this->first_name);
	Util::FormatPrint(this->last_name);
	Util::FormatPrint(this->nickname);
}

Contact::~Contact(void) {

	return ;
}

Phonebook::Phonebook (void) {

	this->slots_left = -1;
	return ;
}

Phonebook::~Phonebook (void) {

	return ;
}

void	Phonebook::SearchContact (void) {

	int		index;
	int		i;

	std::cout << "Please select from the following entries" << std::endl;
	for (i = 0; i < this->slots_left; i++)
		this->entries[i].PromptEntry();
	std::cin >> index;
	if (this->slots_left == -1)
		std::cout << "No entries available" << std::endl;
	else if (index < 1 || index > 8)
		std::cout << "Please enter a valid index [1 - " << this->slots_left + 1 <<
			"]" << std::endl;
	else
		this->entries[index].PrintEntry();
}

void	Phonebook::AddContact (void) {

	if (this->slots_left < 8)
	{
		this->slots_left++;
		this->entries[slots_left].Init(this->slots_left);
	}
	else
		std::cout << "Oops! it looks like you ran out of storage!" << std::endl;
}

