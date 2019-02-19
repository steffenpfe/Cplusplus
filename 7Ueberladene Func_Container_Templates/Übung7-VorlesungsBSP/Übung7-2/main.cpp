#include <iostream>
#include "genericcontainer.h"

using namespace std;


int main() {

    GenericContainer<int> g1(10); //Mit 10 initialisieren
    g1.set(20);
    cout << "Container: " << g1.get() << endl;

    GenericContainer<float> g2(10.5);//Mit 10.5 initialisieren
    g2.set(20.5);
    cout << "Container: " << g2.get() << endl;

    return 0;
}
