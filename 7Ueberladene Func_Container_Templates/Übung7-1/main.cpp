#include <iostream>

using namespace std;


//Variante 3:
//Template das dynamisches Feld erzeugt und Elemente umgekehrt einfügt:
//Gibt dann ein Zeiger auf das neue Feld zurück..
template<typename TYPE1>
TYPE1 *change(TYPE1 z[], int length){
    TYPE1 *helparr = new TYPE1[length];

    int i;
    for(i=0; i<length; i++){
        helparr[i] = z[length-1-i];
    }

    return helparr;

}


int main()
{

    const int length = 6;

    //Hier können beide int z.B. in ein float geändert werden.
    //Die Funktion reagiert darauf automatisch!!
    int z[] = {1,2,3,4,5,6};
    int *newarr= change(z,length);

    cout << "newarr[]: \n"<< endl;
    int i;
    for(i=0; i<length; i++)
        cout << newarr[i]<<endl;

    return 0;
}





/*
//Variante 2: Feld und einen int Parameter übergeben..
//Man braucht nur einen TYPE....
template<typename TYPE>
void change(TYPE z[], int length){
    int i; //Geht in diesem Fall glaub nur wenn gerade Anzahl von Feldelementen..
    TYPE tmp;
    for(i=0; i<length; i++){
        tmp = z[length-i-1];
        z[length-i-1] = z[i];
        z[i] = tmp;

        if(i == (length/2)-1)
            break;
    }
}


int main()
{

    const int length = 6;
    float z[] = {1,2,3,4,5,6};
    //Das z-arr kann nun in float oder int oder... einfach geändert werden!!

    change(z,length);

    cout << "z[]: \n"<< endl;
    int i;
    for(i=0; i<length; i++)
        cout << z[i]<<endl;

    return 0;
}*/












/*
//Funktionen überladen--> Sucht sich je nach float oder int Funktion aus und tauscht
//Variante1:
void flip(int &num1, int &num2){
    int tmp;
    if(num2>num1){
        tmp = num1;
        num1 = num2;
        num2 =tmp;
    }
}

void flip(float &num1, float &num2){
    float tmp;
    if(num2>num1){
        tmp = num1;
        num1 = num2;
        num2 =tmp;
    }
}

//Bessere Lösung mit Template!
template<typename TYPE>
void flip(TYPE &num1, TYPE &num2){
    TYPE tmp;
    if(num2>num1){
        tmp = num1;
        num1 = num2;
        num2 =tmp;
    }
}


int main()
{


    float a = 5.5;
    float b = 9.9;

    flip(a,b);

    cout << "a: " << a << "\nb: " << b << endl;
    return 0;
}*/

