#include "buch.h"

Buch::Buch(string pAutor, string pTitel, string pISBN):
    Autor(pAutor), Titel(pTitel), ISBN(pISBN) {}


string Buch::toString() {
    ostringstream strStream;
    strStream << "Autor: " << Autor << ", Titel: " << Titel;
    strStream << ", ISBN: " << ISBN;

    return strStream.str();
}
