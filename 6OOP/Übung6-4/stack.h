#ifndef STACK_H
#define STACK_H

class Stack{

public:
    bool push(int val);
    bool pop(int &val);
    bool empty();
    bool full();
    Stack(int psize);

private:
    bool state;
    int index;
    int *arr;
    int size;

};

#endif // STACK_H
