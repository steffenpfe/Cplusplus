#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include "door.h"

class Car {
    public:
    Car();
    Engine engine;          //KOMPOSITION
    Wheel wheel[4];         //KOMPOSITION
    Door left, right;       //KOMPOSITION
};

#endif // CAR_H
