#ifndef PLAYEROBJ_CLASS_H
#define PLAYEROBJ_CLASS_H

#include "../inc/gameObj.class.hpp"

class playerObj : public gameObj {

public:
  playerObj(void);
  playerObj(int maxX, int maxY);
  playerObj(playerObj const &obj);
  playerObj &operator=(playerObj const &rhs);
  ~playerObj();
  int getX();
  int getY();
  void initializeMap(void);
  void takeInput(int keyPress);
  void moveLeft(void);
  void moveRight(void);
  void moveUp(void);
  void moveDown(void);
  void setX(int x);
  void setY(int y);

private:
  int **_playerMap;
  static int _x;
  static int _y;
};

#endif
