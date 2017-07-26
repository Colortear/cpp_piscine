/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayObj.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:34:03 by wdebs             #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "displayObj.class.hpp"
#include "gameObj.class.hpp"
#include <iostream>

displayObj::displayObj(int const score_size)
    : _parent_x(0), _parent_y(0), _new_x(0), _new_y(0), _score_size(score_size),
      _field(NULL), _score(NULL) {

  initscr();
  noecho();
  curs_set(FALSE);
  getmaxyx(stdscr, _parent_y, _parent_x);
  _field = newwin(_parent_y - _score_size, _parent_x, 0, 0);
  _score = newwin(_score_size, _parent_x, _parent_y - score_size, 0);
  _score_tracker = 0;
  return;
}

displayObj::displayObj(displayObj const &src) { *this = src; };

  delwin(this->field);
  delwin(this->score);
  endwin();
  return;
}

displayObj	&displayObj::operator=(displayObj const &src) {

	_parent_x = rhs._parent_x;
	_parent_y = rhs._parent_y;
	_new_x = rhs._new_x;
	_new_y = rhs._new_y;
	_score_size = rhs._score_size;
	_field = rhs._field;
	_score = rhs._score;
	return (*this);
}

void displayObj::refresh(int **displayMap) {

  int y;
  int x;

  //	getmaxyx(stdscr, new_y, new_x);
  //	if (_new_y != _parent_y || _new_x != _parent_x) {
  //		_parent_x = _new_x;
  //		_parent_y = _new_y;
  //		wresize(_field, _new_y - _score_size, _new_x);
  //		wresize(_score, _score_size, _new_x);
  //		mvwin(_score, _new_y - _score_size, 0);
  //		wclear(stdscr);
  //		wclear(_field);
  //		wclear(_score);
  //	}
  for (y = 0; y < _parent_y - score_size; y++) {
    for (x = 0; x < _parent_x; x++) {
      if (displayMap[y][x] == vacant)
        mvwprintw(this->_field, y, x, " ");
      else if (displayMap[y][x] == enemy)
        mvwprintw(this->_field, y, x, "V");
      else if (displayMap[y][x] == player)
        mvwprintw(this->_field, y, x, "^");
      else if (displayMap[y][x] == bullet)
        mvwprintw(this->_field, y, x, "|");
      else if (display[y][x] == collision) {
        ++score_tracker;
        mvwprintw(this->_score, y, x, std::stoi(this->_score_tracker));
      }
    }
  }
}

int displayObj::getParentX(void) { return (this->_parent_x); }

int displayObj::getParentY(void) { return (this->_parent_y); }
