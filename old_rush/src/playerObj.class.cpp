#include "../inc/playerObj.class.hpp"
#include <ncurses.h>
playerObj::playerObj(void) {
  _x = 0;
  _y = 0;
}

playerObj::playerObj(playerObj const &obj) { *this = obj; };

playerObj &playerObj::operator=(const playerObj &rhs) {
  if (this == &rhs)
    return *this;
  this->_playerMap = rhs._playerMap;
  this->_x = rhs._x;
  this->_y = rhs._y;

  return *this;
}

void playerObj::initializeMap(void) {
  _playerMap = new int *[maxY];
  for (int i = 0; i < maxY; i++) {
    _playerMap[i] = new int[maxX];
    for (int zero = 0; zero < maxX; zero++)
      _playerMap[i][zero] = 0;
  }
}

void playerObj::takeInput(int keyPress) {
  switch (keyPress) {
  case KEY_UP:
    moveUp();
  case KEY_DOWN:
    moveDown();
  case KEY_LEFT:
    moveLeft();
  case KEY_RIGHT:
    moveRight();
  }
}

void playerObj::moveLeft(void) { _x -= 1; }

void playerObj::moveRight(void) { _x += 1; }

void playerObj::moveUp(void) { _y -= 1; }

void playerObj::moveDown(void) { _y += 1; }

int playerObj::getY(void) { return (_x); }

int playerObj::getX(void) { return (_y); }

int **playerObj::getMap(void) { return _playerMap; }

void playerObj::setY(int y) { _y = y; }

void playerObj::setX(int x) { _y = x; }