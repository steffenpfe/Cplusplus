#include <iostream>

using namespace std;
#include "fahrroboter.h"
#include "wischroboter.h"
#include "saugroboter.h"
#include "reinigungskraft.h"
#include "fensterputzroboter.h"



int main()
{
    Reinigungskraft cleaner;
    Fahrroboter *bot[3];
    bot[0] = new Saugroboter("Duster");
    bot[1] = new Wischroboter("Wiper");
    //bot[2] = new Fensterputzroboter("Climber");

    for(int i=0; i<2; i++) {
        cleaner.benutzen(bot[i]);
    }
    
    
    
    
    
    
//    Saugroboter dust("Duster");
//    dust.Fahren();
//    dust.Saugen();
//    dust.Laden();
//    Wischroboter wipe("Wiper");
//    wipe.Fahren();
//    wipe.Wischen();
//    wipe.Laden();

//    Fensterputzroboter climb("Climber");
//    climb.Putzen(); //Hier Gefahr der Doppeldeutigkeit!!

    return 0;
}

