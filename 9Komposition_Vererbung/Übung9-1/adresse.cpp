#include "adresse.h"

Adresse::Adresse(string street, string city, string number):street(street), city(city), number(number)  {}


string Adresse::toString() {
    ostringstream strStream;
    strStream << street << " " << number << " , " << city << endl;

    return strStream.str();
}
