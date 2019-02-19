#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shapes.h"

class Triangle: public Shapes
{
public:
    Triangle(QPainter *painter, int size);
     void draw(int x, int y);
};

#endif // TRIANGLE_H
