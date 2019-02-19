#include "square.h"

Square::Square(QPainter *painter, int size):
    Shapes(painter, size) {}


void Square::draw(int x, int y) {
    object->drawLine(x-size/2,y+size/2,x-size/2,y-size/2);
    object->drawLine(x-size/2,y-size/2, x+size/2, y-size/2);
    object->drawLine(x+size/2, y-size/2, x+size/2, y+size/2);
    object->drawLine(x+size/2, y+size/2, x-size/2,y+size/2);


}
