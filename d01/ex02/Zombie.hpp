/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:31:52 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 13:52:01 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {

public:

	Zombie(std::string n, std::string t);
	~Zombie(void);
	void	announce(void);

private:

	std::string	_name;
	std::string	_type;
};

#endif
