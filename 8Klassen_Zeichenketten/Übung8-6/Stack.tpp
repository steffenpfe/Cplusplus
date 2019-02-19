#include <iostream>
using namespace std;


template <class T>
Stack<T>::Stack(int psize) { //Konstruktor
    this->size = psize;
    arr = new T[size];
    index = 0;
}

template <class T>
Stack<T>::~Stack() {    //Destruktor
    cout << "Destruktor aufgerufen. arr wird geloescht" << endl;
    delete [] arr;
}

template <class T>
Stack<T>::Stack(Stack & object) {
    arr = new T[object.size];
    index = 0;
    this->size = object.size;
    int i;
    T tmpval;
    for(i=0; i<object.size; i++){
        object.pop(tmpval); //werte von dem übergebenen Objekt holen
        arr[object.size-1-i] = tmpval; //Werte von hinternnach vorne in Feld schreiben
        index++; //damit im kopierten Objekt auch wieder der Index mit Anzahl Feldelem steigt
    }
    for(i=0; i<size; i++){
        object.push(arr[i]); //Werte nun wieder in zu kopierendes Feld speichern da bei pop geloescht wird
    }
}



template <class T>
bool Stack<T>::push(T val){
    state = full(); //Wert intern speichern bevor rückgabe!
    if(state == false){
        arr[index] = val;
        index++;
    }
    return state;
}

template <class T>
bool Stack<T>::pop(T &val){//Soll wenn Stapel voll ein true geben
    state = empty();//wie oben!!
    if(state == false){ //Nur ausführen wenn Stapel nicht leer!!
        val = arr[index-1]; //-1, da index bei 0 anfängt, size nicht!!
        index--;
    }
    return state;
}

template <class T>
bool Stack<T>::empty(){
    if(index==0){
        cout << "stack empty" << endl;
        return true;
    }
    else
        return false;
}

template <class T>
bool Stack<T>::full(){
    if(index == size){
        cout << "stack full" << endl;
        return true;
    }
    else
        return false;
}

template <class T>
void Stack<T>::clear() {
    index = 0;
    if(empty())
        cout << "Feldelemente geloescht." << endl;
}
