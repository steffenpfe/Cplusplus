#include "pentagon.h"

Pentagon::Pentagon(QPainter *painter, int size):
    Shapes(painter, size) {}

void Pentagon::draw(int x, int y) {
    object->drawLine(x-size/2, y+(3*size)/4, x-(5*size)/6, y-size/6);
    object->drawLine(x-(5*size)/6, y-size/6, x, y-(3*size)/4);
    object->drawLine(x, y-(3*size)/4, x+(5*size)/6, y-size/6);
    object->drawLine(x+(5*size)/6, y-size/6, x+size/2, y+(3*size)/4);
    object->drawLine(x+size/2, y+(3*size)/4, x-size/2, y+(3*size)/4);



}
