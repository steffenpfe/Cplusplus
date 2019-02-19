#ifndef NUMBERCONTAINER_HPP
#define NUMBERCONTAINER_HPP

template <class T>
class NumberContainer {
private:
    int length; //Für die Anzahl der im Containerproj gespeicherten Zahlenwerte
    T *carr = new T[length]; //dyn. Feld in dem diese Zahlen gespeichert sind

public:
    NumberContainer(int length); //length wieder Anzahl Zahlenwerte
    bool set(T val, int pos);
    bool get(T &val, int pos);
    void flip();//Dreht Zahlenwerte um

};


#include "NumberContainer.tpp"
#endif // NUMBERCONTAINER_HPP
