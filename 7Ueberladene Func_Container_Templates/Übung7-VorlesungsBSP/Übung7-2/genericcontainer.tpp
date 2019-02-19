template<class T>
GenericContainer<T>::GenericContainer(T val) {
    this->val = val;
}

template<class T>
void GenericContainer<T>::set(T val) {
    this->val = val;
}

template<class T>
T GenericContainer<T>::get() {
    return val;
}

//.cpp löschen und dafür .tpp einfügen-->.tpp in header include
