#include "auftrag.h"
#include "benutzer.h"
#include <iostream>
using namespace std;

Auftrag::Auftrag(char a) {
    this->programm = a;
}

Auftrag::~Auftrag() { //Wird bei delete a Haushaltsroboter::empfangen aufgerufen
    cout << "Auftrag fertig. Objekt wird geleoscht." << endl;
}
