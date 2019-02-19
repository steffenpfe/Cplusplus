#include "reinigungskraft.h"

Reinigungskraft::Reinigungskraft()
{
}



void Reinigungskraft::benutzen(Fahrroboter *r) {
    if(r->what() == 'w') { //Wischroboter
        cout << "Reinigungskraft: Starte Wischroboter" << endl;
        Wischroboter *w = (Wischroboter*) r;
        w->Wischen();
    }
    if(r->what() == 's') {//Saugroboter
        cout << "Reinigungskraft: Starte Saugroboter" << endl;
        Saugroboter *s = (Saugroboter*) r;
        s->Saugen();
    }
//    if(r->what() == 'g') {//Fensterputzroboter
//        cout << "Reinigungskraft: Starte Fensterputzroboter" << endl;
//        Fensterputzroboter *g = (Fensterputzroboter*) r;
//        g->Putzen();
//    }
}
