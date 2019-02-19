#include <iostream>
using namespace std;


template <class T>
Stack<T>::Stack(int psize) {
    this->size = psize;
    index = 0;
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




