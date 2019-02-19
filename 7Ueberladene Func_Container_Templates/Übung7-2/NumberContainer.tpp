template<class T>
NumberContainer<T>::NumberContainer(int length) {
    this->length = length;
}

template <class T>
bool NumberContainer<T>::set(T val, int pos) {
    if(pos >= 0 && pos < length){
        carr[pos] = val;
        return true;
    }
    else{
        return false;
    }
}

template <class T>
bool NumberContainer<T>::get(T &val, int pos) {
    if(pos >= 0 && pos < length){
        val = carr[pos];
        return true;
    }
    else{
        false;
    }
}

template <class T>
void NumberContainer<T>::flip() {
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
