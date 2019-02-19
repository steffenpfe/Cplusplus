#include <iostream>
#include <kunde.h>
#include <adresse.h>
#include <name.h>
#include <ware.h>


using namespace std;

//***********************************************************************************************
//OPERATOR ÜBERLADEN ---
void operator << (ostream &strm, Kunde &p) {
    strm << p.customerID << "\n" << p.name.toString() << p.address.toString();
}




int main()
{
    Kunde kunde1("NP-15081769-FR", "Napoleon", "Bonaparte", "Longwood House", "1", "St. Helena");
    kunde1.neueWare("Courvoisier Cognac", "25.72", "15.02.1818");
    kunde1.neueWare("Eau de Gloire", "75.50", "05.07.1818");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819"); //Viele neue Waren damit Liste auto. vergrößert wird
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");
    kunde1.neueWare("Tabac a Priser", "17.85", "15.04.1819");

    cout << kunde1; //OPERATOR ÜBERLADEN

    //Alternativ:
    /*
    cout << kunde1.customerID << endl;
    cout << kunde1.name.toString();
    cout << kunde1.address.toString();
     */



    cout << "Gekaufte Produkte:" <<endl;
    cout << kunde1;



    return 0;
}

