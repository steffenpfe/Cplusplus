#include "haushaltsroboter.h"
#include <iostream>
using namespace std;


void Haushaltsroboter::empfangen(Auftrag *a) {
    if(a->programm == 'w')
        wischen();
    else
        saugen();

    delete a;
}

void Haushaltsroboter::wischen() {
    cout << "Roboter wischt den Boden" << endl;
}

void Haushaltsroboter::saugen() {
    cout << "Roboter saugt Staub" << endl;
}

