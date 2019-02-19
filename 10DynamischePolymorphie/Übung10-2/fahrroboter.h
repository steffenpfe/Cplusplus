#ifndef FAHRROBOTER_H
#define FAHRROBOTER_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;


class Fahrroboter
{
public:
    Fahrroboter(string pDriver);
    void Fahren();
    void Laden();
    virtual char what();

protected:
    string Driver;

};

#endif // FAHRROBOTER_H
