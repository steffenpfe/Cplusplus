#include <iostream>
#include <stdlib.h>
#include <polygon.h>
#include <square.h>
#include <triangle.h>
#include <pentagon.h>

using namespace std;

//***********************************************************************
//Zu 3.
void painter(Polygon &p) {
    p.draw();
}




/*
//************************************************************************
//Zu 2.
void painter(Polygon *p) {
    p->draw();
    delete p;
}
*/


int main()
{
//***********************************************************************
//3.
    Polygon p; Triangle t; Square s; Pentagon pen;
    painter(p);
    painter(t);
    painter(s);
    painter(pen);







/*
//*************************************************************************
//2. mit Funktionsaufruf in main..
    painter(new Polygon);
    painter(new Triangle);
    painter(new Square);
    painter(new Pentagon);
*/






/*
//*************************************************************************
//1.zufällige Ausgabe einer Unterklasse... mit late binding->virtual
    float shape = rand()*1.0 / RAND_MAX; // int rand()

    Polygon *p;
    if (shape < 0.333)
    p = new Triangle;
    else if (shape > 0.666)
    p = new Square;
    else
    p = new Pentagon;

    p->draw();

    if (p->what() == 't')
        cout << "Triangle generated\n";
    else if (p->what() == 's')
        cout << "Square generated\n";
    else if (p->what() == 'p')
        cout << "Pentagon generated\n";
*/

    return 0;
}

