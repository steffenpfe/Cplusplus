#include <iostream>
#include "vector.h"

using namespace std;



//Mit Kopierkonstruktor
int main() {

    float farr1[] = {1, 2, 3};
    float farr2[] = {4, 5, 6};

    vector v1(3);
    v1.write(farr1); // v1={1, 2, 3}

    //Neues Objekt mit dem erste Objekt initialisieren
    vector v2(v1);   // v2=v1={1, 2, 3}
    v2.write(farr2); // v2=v1={4, 5, 6}

    cout << v1.toString() << endl;
    cout << v2.toString() << endl;

}




/* Vektor ohne Kopierkonstruktor
int main() {

    float farr1[] = {1, 2, 3};
    float farr2[] = {4, 5, 6};

    vector v1(3), v2(3);

    v1.write(farr1);
    v2.write(farr2);

    cout << v1.toString() << endl;
    cout << v2.toString() << endl;

    return 0;
}
*/
