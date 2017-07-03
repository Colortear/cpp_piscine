/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyClasses.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 22:18:43 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/02 23:17:41 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYCALSSES_H
# define MYCLASSES_H

#include <string>

class	Contact {
	
public:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	address;
	std::string	email;
	std::string	phone;
	std::string	birthday;
	std::string	fave_meal;
	std::string	undies_color;
	std::string	darkest_secret;

	void	PrintEntry(void);
	void	Init(void);
	void	~Contact(void);
};

class	Phonebook {
	
public:

	Contact	entries[8];
	int		slots_left;

	void	Phonebook(void);
	void	~Phonebook(void);
	void	SearchContact(int index) const;
	void	AddContact(void);
};

#endif
