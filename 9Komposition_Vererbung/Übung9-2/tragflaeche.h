#ifndef TRAGFLAECHE_H
#define TRAGFLAECHE_H

#include "triebwerk.h"
#include <iostream>

using namespace std;

class Tragflaeche
{
public:
    Tragflaeche(string pTragflaeche);
    Triebwerk newTriebwerk;

private:
    string whichTragflaeche;

};

#endif // TRAGFLAECHE_H
