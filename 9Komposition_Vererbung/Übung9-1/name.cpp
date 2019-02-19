#include "name.h"

Name::Name(string firstName, string lastName): firstName(firstName),lastName(lastName) {}

string Name::toString() {
    ostringstream strStream;
    strStream << firstName << " " << lastName << endl;

    return strStream.str();
}

