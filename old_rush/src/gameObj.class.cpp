#include "../inc/gameObj.class.hpp"

gameObj::gameObj(int maxX, int maxY) {
  _maxX = maxX;
  _maxY = maxY;
}

gameObj::gameObj(void) {
  _maxX = 0;
  _maxY = 0;
}

gameObj::gameObj(gameObj const &obj) { *this = obj; };

gameObj &gameObj::operator=(const gameObj &rhs) {
  if (this == &rhs)
    return *this;
  this->_maxX = rhs._maxX;
  this->_maxY = rhs._maxY;

  return *this;
}

int gameObj::getMaxY(void) { return (_maxY); };

int gameObj::getMaxX(void) { return (_maxY); };

void gameObj::setMaxY(int y) { _maxY = y; };

void gameObj::setMaxX(int x) { _maxX = x; };

int gameObj::getMidMapX(void) { return (_maxX / 2); };

int gameObj::getMidMapY(void) { return (_maxY / 2); };
