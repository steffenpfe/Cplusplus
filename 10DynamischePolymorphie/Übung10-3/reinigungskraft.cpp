#include "reinigungskraft.h"




void Reinigungskraft::benutzen(Fahrroboter &r) {
    cout << "Reinigungskraft: Starte " << r.Driver << endl;
    r.arbeiten();
}
