#include "roman.h"

Roman::Roman(string pAutor, string pTitel, string pGenre, string pISBN):
    Buch(pAutor, pTitel, pISBN), Genre(pGenre) {}

string Roman::toString() {
    ostringstream strStream;
    strStream << Buch::toString() << ", Genre: " << Genre;

    return strStream.str();
}
