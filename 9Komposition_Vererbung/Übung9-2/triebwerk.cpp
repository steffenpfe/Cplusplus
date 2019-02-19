#include "triebwerk.h"

Triebwerk::Triebwerk(string pSide): whichSide(pSide)
{
    cout<< whichSide << "s Triebwerk erzeugt" << endl;
}




void Triebwerk::TriebwerkStart() {
    cout << whichSide << "s Triebwerk gestartet" << endl;
}


void Triebwerk::TriebwerkStop() {
    cout << whichSide << "s Triebwerk gestoppt" << endl;
}
