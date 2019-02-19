#ifndef GENERICCONTAINER_H
#define GENERICCONTAINER_H

template<class T>
class GenericContainer {
    private:
    T val;

    public:
    GenericContainer(T val);
    void set(T val);
    T get();
};

#include "genericcontainer.tpp"
#endif // GENERICCONTAINER_H



/* Variante ohne Templates
#ifndef CONTAINER_H
#define CONTAINER_H
class Container {
    private:
    int val;

    public:
    Container(int val);
    void set(int val);
    int get();
};
#endif // CONTAINER_H
*/
