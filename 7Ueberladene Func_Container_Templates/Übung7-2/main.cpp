#include <iostream>
#include <NumberContainer.hpp>

using namespace std;

//MIT .TPP   !!!!!!

//Hier ist alles auf Basis Typ int aufgebaut.. kann auch in float geändert werden
//wegen templates in .hpp ...
int main()
{
    int tmpval, i,j,k;
    bool state;

    cout << "Wie viele Feldelemente: ";
    cin >> i;

    NumberContainer<int> first(i); //i elemente vom Typ int..

    do{
        cout << "1: SET 2: GET 3: FLIP 4: QUIT : ";
        cin >> i;

        if(i==1){
            cout << "value: ";
            cin >> j;
            cout << "position: ";
            cin >> k;

            state = first.set(j,k);
            if(state == false)
                cout << "nicht vorhanden\n";
        }
        if(i==2){
            cout << "position: ";
            cin >> k;

            state = first.get(tmpval,k);
            if(state == false)
                cout << "nicht vorhanden\n";
            else
                cout << tmpval << endl;
        }
        if(i==3){
            first.flip();
        }
    }while(i != 4);
    cout << "Ade." << endl;



    return 0;
}

