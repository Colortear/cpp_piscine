/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:11:05 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/04 12:49:00 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <iostream>

class	Pony {

public:

	Pony(std::string text, int number);
	~Pony(void);

	int		pony_race_number;
};

#endif
