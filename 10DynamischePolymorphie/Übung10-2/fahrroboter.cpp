#include "fahrroboter.h"

Fahrroboter::Fahrroboter(string pDriver): Driver(pDriver) {}


void Fahrroboter::Fahren() {
    cout << Driver << " faehrt" << endl;
}


void Fahrroboter::Laden() {
    cout << Driver << " laedt seine Akkus" << endl;
}



char Fahrroboter::what() {
    return 'f';
}
