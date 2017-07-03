/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 22:15:30 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/02 22:35:26 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#include "MyClasses.h"

int		main(void)
{
	std::string	cmd;
	std::ifstream f("image.txt");

	Phonebook	phone;

	if (f.is_open())
		std::cout << f.rdbuf();
	std::cout << std::endl << 
		"Welcome to PhoneTek Inc. state of the art digital contact look up system."
		<< std::endl << "Please select from the following options:" << std::endl
		<< "NOTE: In order to maintain the records that you enter," << std::endl
		<< "keep this application running at all times. Closing the" << std::endl
		<< "program will result in immediate and total data loss." << std::endl;
	std::cout << "ADD -- adds entry to contact book." << std::endl
		<< "SEARCH -- allows search of contact book for specific entry."
		<<std::endl << "EXIT -- exits the program." << std::endl;
	while (1)
	{
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
			phone.AddContact();
		else if (cmd.compare("SEARCH") == 0)
			phone.SearchContact();
		else if (cmd.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Please enter a valid option" << std::endl;
	}
	std::cout << "Goodbye." << std::endl;
	return (0);
}
