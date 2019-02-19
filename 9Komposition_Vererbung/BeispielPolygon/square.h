#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include "polygon.h"
using namespace std;

class Square : public Polygon {
public:
    void draw(); /* draw triangle */
    char what(); /* say triangle */
};

#endif // SQUARE_H
