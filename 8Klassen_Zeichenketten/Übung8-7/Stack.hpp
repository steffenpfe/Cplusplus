#ifndef STACK_HPP
#define STACK_HPP


template <class T>
class Stack{

/* Wenn ohne equals in Klasse und alles in main
template <typename U>
friend bool operator == (Stack<U> &sl, Stack<U> &sr);
*/


public:
    bool push(T val);
    bool pop(T &val);
    void clear();
    bool empty();
    bool full();
    bool equals(const Stack &s);
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
