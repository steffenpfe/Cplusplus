#include "saugroboter.h"

Saugroboter::Saugroboter(string pDriver): Fahrroboter(pDriver) {}



void Saugroboter::Saugen() {
    cout << Driver << " saugt" << endl;
}


char Saugroboter::what() {
    return 's';
}
