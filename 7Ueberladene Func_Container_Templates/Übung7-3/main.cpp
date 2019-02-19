#include <iostream>
#include "Stack.hpp""
#include "lightbulb.h"

using namespace std;

int main()
{
    bool StackState;
    int i;

    Stack<int> IntStapel(3);
    Stack<float> FloatStapel(3);
    Stack<char> CharStapel(3);
    Stack<Lightbulb> StringStapel(3); //Zeiger übergeben ??????



    int val1;
    int arr1[] = {-7, 1, 12, 2};

    for(i = 0; i<4; i++){
        StackState = IntStapel.push(arr1[i]);
        if(StackState)
            break;
        cout << arr1[i] << " now on top of the stack." << endl;
    }

    for(i = 0; i<4; i++){
        StackState = IntStapel.pop(val1);
        if(StackState)
            break;
        cout << "pop delivered " << val1 << endl;
    }
    cout << endl;



    float val2;
    float arr2[] = {-7.12, 1.07, 12.25, -7.12};

    for(i = 0; i<4; i++){
        StackState = FloatStapel.push(arr2[i]);
        if(StackState)
            break;
        cout << arr2[i] << " now on top of the stack." << endl;
    }

    for(i = 0; i<4; i++){
        StackState = FloatStapel.pop(val2);
        if(StackState)
            break;
        cout << "pop delivered " << val2 << endl;
    }
    cout << endl;



    char val3;
    char arr3[] = {'a', 'b', 'c', 'd'};

    for(i = 0; i<4; i++){
        StackState = CharStapel.push(arr3[i]);
        if(StackState)
            break;
        cout << arr3[i] << " now on top of the stack." << endl;
    }

    for(i = 0; i<4; i++){
        StackState = CharStapel.pop(val3);
        if(StackState)
            break;
        cout << "pop delivered " << val3 << endl;
    }
    cout << endl;


    Lightbulb test[] = { "red", "green" , "blue" , "orange" };
    Lightbulb tmp;

    for(i = 0; i<4; i++){
        StackState = StringStapel.push(test[i]);
        if(StackState)
            break;
        cout << test[i].getColor() << " light bulb now on top of the stack." << endl;
    }

    for(i = 0; i<4; i++){
        StackState = StringStapel.pop(tmp);
        if(StackState)
            break;
        cout << "pop delivered " << tmp.getColor() << " light bulb." << endl;
    }









    return 0;
}

