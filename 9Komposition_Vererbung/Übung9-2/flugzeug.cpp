#include "flugzeug.h"

Flugzeug::Flugzeug(string pLeft, string pRight):
    firstRumpf(pLeft, pRight) {

    cout << "Flugzeug erzeugt" << endl;
}


void Flugzeug::FlugzeugStart() {
    cout << "Flugzeug gestartet" << endl;
}

void Flugzeug::FlugzeugLand() {
    cout << "Flugzeug gelandet" << endl;
}
