#ifndef STACK_HPP
#define STACK_HPP

template <class T>
class Stack{

public:
    bool push(T val);
    bool pop(T &val);
    bool empty();
    bool full();
    Stack(int psize);

private:
    bool state;
    int index;
    T *arr = new T[size];
    int size;

};


#include "Stack.tpp"
#endif // STACK_HPP
