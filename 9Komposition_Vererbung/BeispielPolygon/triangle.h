#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "polygon.h"
#include <iostream>
using namespace std;

class Triangle : public Polygon {
public:
    void draw(); /* draw triangle */
    char what(); /* say triangle */
};

#endif // TRIANGLE_H
