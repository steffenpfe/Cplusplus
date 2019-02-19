#ifndef MEDIZINBUCH_H
#define MEDIZINBUCH_H

#include <string>
#include <sstream>
using namespace std;
#include "buch.h"
#include "sachbuch.h"


class Medizinbuch : public Sachbuch
{
public:
    Medizinbuch(string pAutor, string pTitel, string pISBN = "n. v.");
    string toString();



};

#endif // MEDIZINBUCH_H
