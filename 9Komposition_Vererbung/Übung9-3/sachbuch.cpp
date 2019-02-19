#include "sachbuch.h"

Sachbuch::Sachbuch(string pAutor, string pTitel, string pFachgebiet, string pISBN):
    Buch(pAutor, pTitel, pISBN), Fachgebiet(pFachgebiet) {}

string Sachbuch::toString() {
    ostringstream strStream;
    strStream << Buch::toString() << ", Fachgebiet: " << Fachgebiet;

    return strStream.str();
}
