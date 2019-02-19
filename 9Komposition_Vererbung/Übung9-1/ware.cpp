#include "ware.h"

Ware::Ware() {

}

Ware::Ware(string pArticleName, string pPrice, string pDate):
    articleName(pArticleName), price(pPrice), date(pDate) {

}

string Ware::toString() {
    ostringstream strStream;
    strStream << articleName << ", " << price << ", " << date << endl;

    return strStream.str();
}
