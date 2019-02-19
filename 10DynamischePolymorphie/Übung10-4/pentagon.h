#ifndef PENTAGON_H
#define PENTAGON_H
#include "shapes.h"

class Pentagon: public Shapes
{
public:
    Pentagon(QPainter *painter, int size);
    void draw(int x, int y);
};

#endif // PENTAGON_H
