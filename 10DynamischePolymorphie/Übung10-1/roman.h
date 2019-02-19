#ifndef ROMAN_H
#define ROMAN_H

#include <string>
#include <sstream>
using namespace std;
#include "buch.h"



class Roman : public Buch
{
public:
    Roman(string pAutor, string pTitel, string pGenre, string pISBN = "n. v.");
    string toString();

private:
    string Genre;

};
#endif // ROMAN_H
