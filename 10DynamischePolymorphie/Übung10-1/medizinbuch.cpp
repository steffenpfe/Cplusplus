#include "medizinbuch.h"

Medizinbuch::Medizinbuch(string pAutor, string pTitel, string pISBN):
    Sachbuch(pAutor, pTitel, "Medizin", pISBN) {}


string Medizinbuch::toString() {
    return Sachbuch::toString();
}
