#include <iostream>
#include "Stack.hpp"

using namespace std;

//Mit .TPP


int main()
{
    bool StackState;
    int i;
    Stack<int> *IntStapelA = new Stack<int>(3);


    int val1;
    int arr1[] = {-7, 1, 12, 2};

    for(i = 0; i<4; i++){ //Zuerst in IntStapelA 3 Zahlen schreiben
        StackState = IntStapelA->push(arr1[i]);
        if(StackState)
            break;
        cout << arr1[i] << " now on top of the stack." << endl;
    }
    cout << endl;




    //IntStapelB erzeugen und dabei Kopierkonstruktor mit IntStapelA aufrufen...
    Stack<int> *IntStapelB = new Stack<int>(*IntStapelA);




    int arr2[] = {2, 8, 5, 1};

    IntStapelA->clear(); //Zuerst Feldelemente loeschen oder alle mit pop zurückholen....

    for(i = 0; i<4; i++){ //Neue Werte in IntStapelA schreiben
        StackState = IntStapelA->push(arr1[i]);
        if(StackState)
            break;
        cout << arr2[i] << " now on top of the stack." << endl;
    }
    cout << endl;





    for(i = 0; i<4; i++){ //IntStapelB ausgeben!!
        StackState = IntStapelB->pop(val1);
        if(StackState)
            break;
        cout << "pop delivered " << val1 << endl;
    }
    cout << endl;




    return 0;
}

