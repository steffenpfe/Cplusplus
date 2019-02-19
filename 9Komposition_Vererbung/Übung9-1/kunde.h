#ifndef KUNDE_H
#define KUNDE_H

#include "name.h"
#include "adresse.h"
#include "ware.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;


class Kunde
{
public:
    Kunde(string kundennr, string firstName, string lastName, string street, string number, string city);
    Name name;
    Adresse address;

    string customerID;
    void neueWare(string bezeichnung, string preis, string datum);
    string toString();

private:
//    Ware nArticle[10];
    Ware *nArticle; //Erweiterung, dass wenn viele Waren neues größeres
    int maxIndex; //Feld erzeugt wird mit umkopieren
    int index;
    void newArticleArr();

};

#endif // KUNDE_H
