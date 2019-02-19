#include "benutzer.h"
#include <string>
#include "auftrag.h"
#include "haushaltsroboter.h"
#include <iostream>
using namespace std;

Benutzer::Benutzer(std::string name) {
    this->name = name;
    this->modus = 's'; //modus mit Saugen initialisieren
}

Auftrag* Benutzer::neuerAuftrag() {
    Auftrag *task;
    task = new Auftrag(modus);

    if(modus == 's'){
        cout << name << " verlangt Saugen" << endl;
        modus = 'w'; //Modus geändert für nächstes mal speichern
    }
    else{
        cout << name << " verlangt Wischen" << endl;
        modus = 's';
    }

    return task; //den Auftrag als Zeiger übergeben
}
