#ifndef WISCHROBOTER_H
#define WISCHROBOTER_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#include "saugroboter.h"


class Wischroboter : public Fahrroboter
{
public:
    Wischroboter(string pDriver);
    void Wischen();
    char what();
    

};

#endif // WISCHROBOTER_H
