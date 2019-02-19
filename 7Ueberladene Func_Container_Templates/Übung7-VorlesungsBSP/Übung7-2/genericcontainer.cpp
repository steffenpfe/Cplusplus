#include "genericcontainer.h"

template<class T>
GnericContainer<T>::GenericContainer(T val) {
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



/*  Variante ohne Templates!!!
#include "container.h"
Container::Container(int val) {
this->val = val;
}
void Container::set(int val) {
this->val = val;
}
int Container::get() {
return val;
}
*/
