#ifndef FLUGZEUG_H
#define FLUGZEUG_H

#include "seitenleitwerk.h"
#include "hoehenleitwerk.h"
#include "rumpf.h"
#include <iostream>

using namespace std;

class Flugzeug
{
public:
    Flugzeug(string pLeft, string pRight);
    Rumpf firstRumpf;
    Seitenleitwerk firstSeitenleitwerk;
    Hoehenleitwerk firstHoehenleitwerk;
    void FlugzeugStart();
    void FlugzeugLand();

};

#endif // FLUGZEUG_H
