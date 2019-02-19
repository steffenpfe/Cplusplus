#include <iostream>

using namespace std;
#include "fahrroboter.h"
#include "wischroboter.h"
#include "saugroboter.h"
#include "reinigungskraft.h"


//Reinigungskraft vergibt aufgaben an Saug und Wischbot
//arbeitet mit Referenz...Polymorphie-> virtual

int main()
{
    Reinigungskraft cleaner;

    Fahrroboter drive("Driver");
    Saugroboter dust("Duster");
    Wischroboter wipe("Wiper");

    cleaner.benutzen(drive);
    cleaner.benutzen(wipe);
    cleaner.benutzen(dust);

    return 0;
}

