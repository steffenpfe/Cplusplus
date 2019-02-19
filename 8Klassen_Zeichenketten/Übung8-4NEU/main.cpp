#include <iostream>
#include <string>
#include "vigenere.h"

using namespace std;

int main()
{
    string str;
    string key;
    string encrypted;

    cout << "Zu verschluesselnde Zeichenkette: ";
    cin >> str;

    cout << "Kennwort: ";
    cin >> key;

    Vigenere *Safe = new Vigenere; //dyn. für Destruktor aufruf!!!!


    encrypted = Safe->verschluesseln(str, key);

    cout << encrypted << endl;



    delete Safe;


    return 0;
}

