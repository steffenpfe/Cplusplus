#include "door.h"
#include <string>
#include <iostream>
using namespace std;

Door::Door(string whichDoor):whichDoor(whichDoor){}

void Door::open() {
cout << whichDoor << " open" << endl;
}

void Door::close() {
cout << whichDoor << " closed" << endl;
}
