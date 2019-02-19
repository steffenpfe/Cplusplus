#ifndef PENTAGON_H
#define PENTAGON_H

#include "polygon.h"
#include <iostream>
using namespace std;

class Pentagon : public Polygon {
public:
    void draw(); /* draw triangle */
    char what(); /* say triangle */
};

#endif // PENTAGON_H
