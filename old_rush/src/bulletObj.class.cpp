/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bulletObj.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:40:35 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/08 20:12:27 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gameObj.class.hpp"
#include "bulletObj.class.hpp"

bulletObj::bulletObj(void) {

	int	**_map = new int*[maxY];
	for (int i = 0; i < maxY; i++)
		_map[i] = new int[maxX];
}

bulletObj::bulletObj(bulletObj const &src) {

	_map = src.getMap();
}

bulletObj::~bulletObj(void) {

	for (int i = 0; i < maxY; i++)
		delete [] map[i];
	delete [] map;
}

void	bulletObj::update(void) {

	int	x;
	int	y;

	for (y = 0; y < maxY; y++) {
		for (x = 0; x < maxX; x++) {
			if (_map[y][x] == player) {
				_map[y][x] = vacant;
				if (y != 0) {
					if (_map[y - 1][x] == enemy)
						_map[y - 1][x] = passing;
					else
						_map[y - 1][x] = player;
				}
			}
			else if (_map[y][x] == enemy) {
				_map[y][x] = vacant;
				if (y < maxY) {
					if (_map[y + 1][x] == player)
						_map[y + 1][x] = passing;
					else if (_map[y + 1][x] != passing)
						_map[y - 1][x] = enemy;
				}
			}
		}
	}
}
