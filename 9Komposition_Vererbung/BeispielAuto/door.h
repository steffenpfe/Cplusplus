#ifndef DOOR_H
#define DOOR_H
#include "window.h"
#include <iostream>
#include <string>
using namespace std;

class Door {
    public:
    Window window; //<-- KOMPOSITION
    void open();
    void close();
    Door(string whichDoor);

    private:
    string whichDoor;
};

#endif // DOOR_H
