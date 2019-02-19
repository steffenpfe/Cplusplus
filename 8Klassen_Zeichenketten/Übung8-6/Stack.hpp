#ifndef STACK_HPP
#define STACK_HPP

template <class T>
class Stack{

public:
    bool push(T val);
    bool pop(T &val);
    void clear();
    bool empty();
    bool full();
    Stack(int psize);
    ~Stack();
    Stack(Stack & object);

private:
    bool state;
    int index;
    T *arr;
    int size;

};


#include "Stack.tpp"

#endif // STACK_HPP
