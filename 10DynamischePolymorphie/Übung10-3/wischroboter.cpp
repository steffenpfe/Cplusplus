#include "wischroboter.h"

Wischroboter::Wischroboter(string pDriver): Fahrroboter(pDriver) {}


void Wischroboter::arbeiten() {
    cout << Driver << " wischt" << endl;
}
