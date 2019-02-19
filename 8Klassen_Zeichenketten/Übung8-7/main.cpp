#include <iostream>
#include <Stack.hpp>

using namespace std;


template<class T>
bool operator == (Stack<T> &sl, Stack<T> &sr) {
    return sl.equals(sr);
}



int main()
{
    bool StackState;
    int i;

//*****************************************************************************
//3. Einen Operator für direkten Vergleich ==
//Der Operator ist in der .hpp und .tpp realisiert
    Stack<int> IntStapelA(3);
    Stack<int> IntStapelB(3);


    int val1;
    int arr1[] = {-7, 1, 12, 2};

    for(i = 0; i<4; i++){ //Zuerst in IntStapelA 3 Zahlen schreiben
        StackState = IntStapelA.push(arr1[i]);
        StackState = IntStapelB.push(arr1[i]);
        if(StackState)
            break;
        cout << arr1[i] << " now on top of the stack." << endl;
    }
    cout << endl;


    if(IntStapelA == IntStapelB)
        cout << "gleich" << endl;
    else
        cout << "verschieden" << endl;






    return 0;
}


/*
//******************************************************************************
    //2. 2Objekt mit Kopierkonstruktor erstellen/kopieren und dann wieder vergleichen-->gleich
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

    if(IntStapelA->equals(*IntStapelB))
        cout << "gleich" << endl;
    else
        cout << "verschieden" << endl;

*/



/*
//***********************************************************************************
    //1. Zwei verschiedene Objekte mit equals verleichen-->verschieden
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



    Stack<int> *IntStapelB = new Stack<int>(3);
    int arr2[] = {2, 8, 5, 1};

    for(i = 0; i<4; i++){
        StackState = IntStapelB->push(arr2[i]);
        if(StackState)
            break;
        cout << arr2[i] << " now on top of the stack." << endl;
    }
    cout << endl;

    if(IntStapelA->equals(*IntStapelB))
        cout << "gleich" << endl;
    else
        cout << "verschieden" << endl; //gibt verschieden aus
*/






/*
//***************************************************************************************
    Sonstiges:


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

    */

