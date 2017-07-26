/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bulletObj.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:22:58 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/08 18:54:31 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_CLASS_HPP
# define BULLET_CLASS_HPP

#include "gameObj.class.hpp"

class	bulletObj : public gameObj {

public:

	bulletObj(void);
	bulletObj(bulletObj const &src);
	~bulletObj(void);

	int		**getMap(void);
	void	setMap(void);
	void	update(void);

private:

	int**	_map;
};

#endif
