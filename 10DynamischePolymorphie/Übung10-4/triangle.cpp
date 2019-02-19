#include "triangle.h"

Triangle::Triangle(QPainter *painter, int size):
    Shapes(painter, size) {}

void Triangle::draw(int x, int y) {
    object->drawLine(x-size/2, y+size/2, x, y-size/2);
    object->drawLine(x, y-size/2, x+size/2, y+size/2);
    object->drawLine(x+size/2, y+size/2 ,x-size/2, y+size/2);

}
