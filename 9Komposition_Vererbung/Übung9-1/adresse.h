#ifndef ADRESSE_H
#define ADRESSE_H
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Adresse
{
public:
    Adresse(string street, string city, string number);
    string toString();



private:
    string street;
    string city;
    string number;

};

#endif // ADRESSE_H
