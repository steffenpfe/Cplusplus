#include "fensterputzroboter.h"

Fensterputzroboter::Fensterputzroboter(string pDriver):
    Saugroboter(pDriver), Wischroboter(pDriver)  {}



void Fensterputzroboter::Putzen() {
    cout << Saugroboter::Driver << " putzt Fenster" << endl;
    Saugroboter::Saugen();
    Wischroboter::Wischen();
} //Hier Saugroboter::Driver oder Wischroboter::Driver wegen Doppeldeutigkeit!!!
