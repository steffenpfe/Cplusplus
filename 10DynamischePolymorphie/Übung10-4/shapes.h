#ifndef SHAPES_H
#define SHAPES_H
#include <QPainter>

class Shapes
{
public:
    Shapes(QPainter *painter, int size=0);
    virtual void draw(int x, int y) =0;

protected:
    QPainter *object;
    int size;
};

#endif // SHAPES_H
