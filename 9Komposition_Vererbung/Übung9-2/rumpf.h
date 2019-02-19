#ifndef RUMPF_H
#define RUMPF_H

#include "fahrgestell.h"
#include "tragflaeche.h"

class Rumpf
{
public:
    Rumpf(string pLeft, string pRight);
    Fahrgestell firstFahrgestell;
    Tragflaeche leftTragflaeche;
    Tragflaeche rightTragflaeche;

};

#endif // RUMPF_H
