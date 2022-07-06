#ifndef TETRIMINO_H
#define TETRIMINO_H

#include "point.hpp"

class tetrimino
{
  public:
  auto get_mino_type (int type, int rotation, point pt) -> int;
  auto get_intial_position (int type, int rotation) -> point;
};

#endif /* TETRIMINO_H */
