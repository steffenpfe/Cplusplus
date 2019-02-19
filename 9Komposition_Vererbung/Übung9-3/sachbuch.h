#ifndef SACHBUCH_H
#define SACHBUCH_H
#include <string>
#include <sstream>
using namespace std;
#include "buch.h"

class Sachbuch : public Buch
{
public:
    Sachbuch(string pAutor, string pTitel, string pFachgebiet, string pISBN = "n. v.");
    string toString();

private:
    string Fachgebiet;

};

#endif // SACHBUCH_H
