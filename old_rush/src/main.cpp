/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:37:13 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/08 19:04:55 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "displayObj.class.hpp"
#include "gameObj.class.hpp"
#include "playerObj.class.hpp"
#include "bulletObj.class.hpp"

enum	gameState { gameOver, gameContinue };

int		main(void) {

	int			score_size = 3;
	int			state;
	displayObj	*display = new displayObj(score_size);
	gameObj		*game = new gameObj(display->getXMax(),
			display->getYMax() - score_size);
	playerObj	*players = new playerObj();
	bulletObj	*bullets = new bulletObj();

	state = 0;
	while (1)
	{
		player->update();
		bullets->update();
		if ((state = game->sync(players.getMap(), bullets.getMap())) == gameOver)
			break ;
		display->refresh();
	}
	delete display;
	return (0);
}
