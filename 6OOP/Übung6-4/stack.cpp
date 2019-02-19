#include "stack.h"

Stack::Stack(int psize){
    this->size = psize;
    arr= new int[size];
    index = 0;
}

bool Stack::push(int val){
    state = full(); //Wert intern speichern bevor rückgabe!->nicht beste lösung...
    if(full() == false){
        arr[index] = val;
        index++;
    }
    return state;
}

bool Stack::pop(int &val){//Soll wenn Stapel voll ein true geben
    state = empty();//wie oben!!
    if(empty() == false){ //Nur ausführen wenn Stapel nicht leer!!
        val = arr[index-1]; //-1, da index bei 0 anfängt, size nicht!!
        index--;
    }
    return state;
}

bool Stack::empty(){
    if(index==0)
        return true;
    else
        return false;
}

bool Stack::full(){
    if(index == size)
        return true;
    else
        return false;
}
