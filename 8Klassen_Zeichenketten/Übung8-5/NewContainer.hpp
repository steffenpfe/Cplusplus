#ifndef NEWCONTAINER_HPP
#define NEWCONTAINER_HPP

#include <iostream>
using namespace std;

template <class T>
class NewContainer {
private:
    int length; //Für die Anzahl der im Containerproj gespeicherten Zahlenwerte
    T *carr; //dyn. Feld in dem diese Zahlen gespeichert sind

public:
    NewContainer(int length); //length wieder Anzahl Zahlenwerte
    ~NewContainer(); //Destruktor
    NewContainer(const NewContainer & length); //Kopierkonstruktor
    bool set(T val, int pos);
    bool get(T &val, int pos);
    void flip();//Dreht Zahlenwerte um

};

#include "NewContainer.tpp"
#endif // NEWCONTAINER_HPP
