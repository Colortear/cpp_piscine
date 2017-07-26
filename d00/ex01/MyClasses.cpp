/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyClasses.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 22:35:56 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/03 12:14:45 by wdebs            ###   ########.fr       */
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

	this->index = i;
	std::cout << "first name: ";
	getline(std::cin, this->first_name);
	std::cout << "last name: ";
	getline(std::cin, this->last_name);
	Util::Marge(this->first_name, this->last_name);
	std::cout << "nickname: ";
	getline(std::cin, this->nickname);
	std::cout << "login: ";
	getline(std::cin, this->login);
	std::cout << "postal address: ";
	getline(std::cin, this->address);
	std::cout << "email address: ";
	getline(std::cin, this->email);
	std::cout << "phone number: ";
	getline(std::cin, this->phone);
	std::cout << "birthday date: ";
	getline(std::cin, this->birthday);
	std::cout << "favorite meal: ";
	getline(std::cin, this->fave_meal);
	std::cout << "underwear color: ";
	getline(std::cin, this->undies_color);
	std::cout << "darkest secret: ";
	getline(std::cin, this->darkest_secret);
}

void Contact::PromptEntry(void) {
	
	std::cout << std::setw(10) << this->index + 1 << "|";
	Util::FormatPrint(this->first_name);
	Util::FormatPrint(this->last_name);
	Util::FormatPrint(this->nickname);
	std::cout << std::endl;
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
	for (i = 0; i <= this->slots_left; i++)
		this->entries[i].PromptEntry();

	std::cin >> index;
	while (std::cin.fail()) {
		std::cout << "PLease enter a valid integer." << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> index;
	}
	std::cin.clear();
	std::cin.ignore(256, '\n');

	if (this->slots_left == -1)
	{
		std::cout << "No entries available" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
	}
	else if (index < 1 || index > this->slots_left + 1)
		std::cout << "Please enter a valid index [1 - " << this->slots_left + 1 << "]" << std::endl;
	else
		this->entries[index - 1].PrintEntry();
}

void	Phonebook::AddContact (void) {

	if (this->slots_left < 7)
	{
		this->slots_left++;
		this->entries[slots_left].Init(this->slots_left);
	}
	else
		std::cout << std::endl << "Oops! it looks like you ran out of storage!" << std::endl;
}

