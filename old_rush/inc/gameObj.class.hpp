#ifndef GAMEOBJ_H
#define GAMEOBJ_H

enum occupancy { vacant, player, enemy, collision, passing };

class gameObj {

public:
  gameObj(void);
  gameObj(int maxX, int maxY);
  gameObj(gameObj const &obj);
  gameObj &operator=(gameObj const &rhs);
  ~gameObj();

  static int maxX;
  static int maxY;

  int getMaxX(void);
  int getMaxY(void);
  void setMaxX(int x);
  void setMaxY(int y);
  int getMidMapX(void);
  int getMidMapY(void);

  unsigned int *getCoord(void);

private:
};

#endif
