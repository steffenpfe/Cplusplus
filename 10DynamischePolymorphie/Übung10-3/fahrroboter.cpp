#include "fahrroboter.h"

Fahrroboter::Fahrroboter(string pDriver): Driver(pDriver) {}



void Fahrroboter::Laden() {
    cout << Driver << " laedt seine Akkus" << endl;
}

void Fahrroboter::arbeiten() {
    cout << Driver << " faehrt" << endl;
}
