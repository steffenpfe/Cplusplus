#include <iostream>

using namespace std;
#include "fahrroboter.h"
#include "wischroboter.h"
#include "saugroboter.h"
#include "fensterputzroboter.h"

int main()
{
    Saugroboter dust("Duster");
    dust.Fahren();
    dust.Saugen();
    dust.Laden();
    Wischroboter wipe("Wiper");
    wipe.Fahren();
    wipe.Wischen();
    wipe.Laden();

    Fensterputzroboter climb("Climber");
    climb.Putzen(); //Hier Gefahr der Doppeldeutigkeit!!

    return 0;
}

