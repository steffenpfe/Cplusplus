#include <iostream>
#include "NewContainer.hpp"

using namespace std;

// MIT .TPP !!!!!!!

//Wie 7.2 nur mit Destruktor und Kopierkonstruktor;
int main()
{

    //Nicht dynamische Variante:
    int tmpval;

    NewContainer<int> first(4); //4 Feldelemente


    first.set(1,0);
    first.set(2,1);
    first.set(3,2);
    first.set(4,3);

    cout << "Folgende Werte sind im 1.Feld gespeichert: " << endl;

    first.get(tmpval,0);
    cout << "Pos. 0: " << tmpval << endl;
    first.get(tmpval,1);
    cout << "Pos. 1: " << tmpval << endl;
    first.get(tmpval,2);
    cout << "Pos. 2: " << tmpval << endl;
    first.get(tmpval,3);
    cout << "Pos. 3: " << tmpval << endl;

    NewContainer<int> second(first);


    second.get(tmpval, 0);
    cout << "Pos. 0: " << tmpval << endl;
    second.get(tmpval, 1);
    cout << "Pos. 1: " << tmpval << endl;
    second.get(tmpval, 2);
    cout << "Pos. 2: " << tmpval << endl;
    second.get(tmpval, 3);
    cout << "Pos. 3: " << tmpval << endl;

    cout << "Ade." << endl;

    return 0;
}

/*
//dynamisch
int tmpval;

NewContainer<int> *first;
first = new NewContainer<int>(4); //4 Feldelemente


first->set(1,0);
first->set(2,1);
first->set(3,2);
first->set(4,3);

cout << "Folgende Werte sind im 1.Feld gespeichert: " << endl;

first->get(tmpval,0);
cout << "Pos. 0: " << tmpval << endl;
first->get(tmpval,1);
cout << "Pos. 1: " << tmpval << endl;
first->get(tmpval,2);
cout << "Pos. 2: " << tmpval << endl;
first->get(tmpval,3);
cout << "Pos. 3: " << tmpval << endl;

NewContainer<int> *second;
second = new NewContainer<int>(*first);


second->get(tmpval, 0);
cout << "Pos. 0: " << tmpval << endl;
second->get(tmpval, 1);
cout << "Pos. 1: " << tmpval << endl;
second->get(tmpval, 2);
cout << "Pos. 2: " << tmpval << endl;
second->get(tmpval, 3);
cout << "Pos. 3: " << tmpval << endl;

delete first;
delete second;
cout << "Ade." << endl;
*/
