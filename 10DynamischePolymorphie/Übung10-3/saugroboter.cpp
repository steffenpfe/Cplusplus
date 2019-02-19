#include "saugroboter.h"

Saugroboter::Saugroboter(string pDriver): Fahrroboter(pDriver) {}



void Saugroboter::arbeiten() {
    cout << Driver << " saugt" << endl;
}
