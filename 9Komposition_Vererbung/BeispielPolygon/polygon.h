#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
using namespace std;

class Polygon {
private:
    int color;

public:
    void setColor(int color);
    virtual void draw(); /* draw polygon */
    virtual char what(); /* say polygon */
};
#endif // POLYGON_H
