#ifndef FENSTERPUTZROBOTER_H
#define FENSTERPUTZROBOTER_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#include "saugroboter.h"
#include "wischroboter.h"



class Fensterputzroboter: public Wischroboter, public Saugroboter
{
public:
    Fensterputzroboter(string pDriver);
    void Putzen();




};

#endif // FENSTERPUTZROBOTER_H
