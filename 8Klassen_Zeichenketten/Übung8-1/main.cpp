#include <iostream>
#include "auto.h"
#include "kunde.h"

using namespace std;

int main()
{
    Auto car1("gruen", true, false);
    Kunde person1("Brause", "Harry", "Selterstr.", "11", "Mostburg");

    cout << "Sehr geehrter " << person1.liesVorname() << " " << person1.liesNachname() << ",\n\n";
    cout << "das von Ihnen bestellte Auto hat wie gewuenscht die Farbe " << car1.liesFarbe() << ",\n";
    if(car1.hatAutomatik())
        cout << "besitzt eine Automatik ";
    else
        cout << "besitzt keine Automatik ";

    if(car1.hatSchiebedach())
        cout << "und ein Schiebedach.\n\n";
    else
        cout << "und kein Schiebedach.\n\n";

    cout << "Ihre Anschrift:" << endl;
    cout << person1.liesStr() << " " << person1.liesNr() << ", " << person1.liesOrt() << endl;

    return 0;
}

