#ifndef FAHRROBOTER_H
#define FAHRROBOTER_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;


class Fahrroboter
{
    friend class Reinigungskraft;

public:
    Fahrroboter(string pDriver);
    void Laden();
    virtual void arbeiten();

protected:
    string Driver;

};
#endif // FAHRROBOTER_H
