#ifndef REINIGUNGSKRAFT_H
#define REINIGUNGSKRAFT_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "fahrroboter.h"
#include "wischroboter.h"
#include "saugroboter.h"




//Verteilt Aufgaben an Roboter
class Reinigungskraft
{
public:
    void benutzen(Fahrroboter &r);

};

#endif // REINIGUNGSKRAFT_H
