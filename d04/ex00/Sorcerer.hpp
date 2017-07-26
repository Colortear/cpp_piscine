/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 19:01:02 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/07 20:00:15 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include <iostream>

class	Sorcerer {

public:

	Sorcerer(std::string const n, std::string const t);
	Sorcerer(Sorcerer const &src);
	~Sorcerer(void);

	Sorcerer	&operator=(Sorcerer const *rhs);

	std::string	name;
	std::string	title;
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i);

#endif
