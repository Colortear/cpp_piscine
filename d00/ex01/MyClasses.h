/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyClasses.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 22:18:43 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/03 13:59:24 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYCLASSES_H
# define MYCLASSES_H

namespace	Util {

	void	FormatPrint(std::string str);
	void	Marge(std::string str1, std::string str2);
}

class		Contact {
	
public:

	int			index;
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

	void	PromptEntry(void);
	void	PrintEntry(void);
	void	Init(int i);
	~Contact(void);
};

class		Phonebook {
	
public:

	Contact	entries[8];
	int		slots_left;

	Phonebook(void);
	~Phonebook(void);
	void	SearchContact(void);
	void	AddContact(void);
};

#endif
