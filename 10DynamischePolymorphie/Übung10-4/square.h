#ifndef SQUARE_H
#define SQUARE_H
#include "shapes.h"

class Square: public Shapes
{
public:
    Square(QPainter *painter, int size);
    void draw(int x, int y);
};

#endif // SQUARE_H
