/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayObj.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 23:54:22 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/08 18:36:47 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_CLASS_HPP
# define DISPLAY_CLASS_HPP

#include <ncurses.h>

class	displayObj {

public:

	displayObj(void);
	displayObj(displayObj const &src);
	~displayObj(void);

	void	refresh(int	**displayMap);

	displayObj	&operator=(displayObj const &rhs);
	int			getParentX(void);
	int			getParentY(void);

private:

	int		_parent_x;
	int		_parent_y;
	int		_new_x;
	int		_new_y;
	int		_score_size;
	WINDOW*	_field;
	WINDOW*	_score;

};

#endif
