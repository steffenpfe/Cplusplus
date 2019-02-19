#include <iostream>
using namespace std;
#include "buch.h"
#include "sachbuch.h"
#include "roman.h"
#include "medizinbuch.h"

int main()
{

    Buch *buecher[4];
    buecher[0] = new Buch("R. Descartes", "Meditationen");
    buecher[1] = new Roman("J.W v. Goethe", "Die Leiden des jungen Werther", "Liebesroman");
    buecher[2] = new Sachbuch("H.P. Gumm und M. Sommer", "Einführung in die Informatik", "Informatik", "3-486-25635-1");
    buecher[3] = new Medizinbuch("W. Pschyrembel", "Klinisches Woerterbuch", "3-11-010881-255");

    for(int i=0; i<4; i++){
        cout << buecher[i]->toString() << endl;
    }









//    Buch buch1("R. Descartes", "Meditationen");
//    cout << buch1.toString() << endl;

//    Roman genre1("J.W v. Goethe", "Die Leiden des jungen Werther", "Liebesroman");
//    cout << genre1.toString() << endl;

//    Sachbuch sachbuch1("H.P. Gumm und M. Sommer", "Einführung in die Informatik", "Informatik", "3-486-25635-1");
//    cout << sachbuch1.toString() << endl;

//    Medizinbuch medizin1("W. Pschyrembel", "Klinisches Woerterbuch", "3-11-010881-255");
//    cout << medizin1.toString() << endl;





    return 0;
}

