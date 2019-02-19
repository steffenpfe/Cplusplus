#include <iostream>
#include "car.h"
using namespace std;

int main()
{
    Car car;
    car.left.window.rollup();
    car.wheel[0].inflate(72);
    car.left.close();
    car.right.close();
    car.left.window.rolldown();
    return 0;
}

