#include "wischroboter.h"

Wischroboter::Wischroboter(string pDriver): Fahrroboter(pDriver) {}


void Wischroboter::Wischen() {
    cout << Driver << " wischt" << endl;
}
