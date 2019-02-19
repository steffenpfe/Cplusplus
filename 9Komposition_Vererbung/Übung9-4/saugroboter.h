#ifndef SAUGROBOTER_H
#define SAUGROBOTER_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "fahrroboter.h"


class Saugroboter : public Fahrroboter
{
public:
    Saugroboter(string pDriver);
    void Saugen();



};

#endif // SAUGROBOTER_H
