template<class T>
NewContainer<T>::NewContainer(int length) {
    this->length = length;
    carr = new T[length];
}


template <class T>
NewContainer<T>::~NewContainer() {
    delete [] carr;
    cout << "Destruktor aufgerufen. carr [] wurde geloescht." << endl;
}


template <class T>
NewContainer<T>::NewContainer(const NewContainer & Ncont) {
    this->length = Ncont.length;
    carr = new T[length];
    int i;

    for(i=0; i<length; i++)
        carr[i] = Ncont.carr[i];

}

template <class T>
bool NewContainer<T>::set(T val, int pos) {
    if(pos >= 0 && pos < length){
        carr[pos] = val;
        return true;
    }
    else{
        return false;
    }
}

template <class T>
bool NewContainer<T>::get(T &val, int pos) {
    if(pos >= 0 && pos < length){
        val = carr[pos];
        return true;
    }
    else{
        false;
    }
}

template <class T>
void NewContainer<T>::flip() {
    int i;
    T tmp;
    if(length%2 == 0) { //gerade Anzahl Feldelemente
        for(i=0; i<(length/2); i++) {
            tmp = carr[i];
            carr[i] = carr[length-i-1];
            carr[length-i-1] = tmp;
        }
    }
    else { //wenn ungerade Anzahl Feldelemente
        for(i=0; i<(length-1)/2; i++) {
            tmp = carr[i];
            carr[i] = carr[length-i-1];
            carr[length-i-1] = tmp;
        }
    }
}
