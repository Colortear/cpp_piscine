/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:16:59 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 13:53:27 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>

class	Human {

public:

	Human(void);
	~Human(void);

	std::string	identify(void);
	Brain		&getBrain(void);

	Brain		brain;
};

#endif
