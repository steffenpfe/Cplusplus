#include <stdio.h>
#include <stdlib.h>

//Dynamisch Speicherplatz anfordern und Feld verdoppeln
int* twiceret(int arr[], int length){
    //dynamisch Speicher anfordern
    int *twice = (int *) malloc(length * sizeof(int));
    int i;

    //Feldelemente kopieren und verdoppeln.
    for(i = 0; i<length; i++)
        twice[i] = 2* arr[i];

    return twice;
}

int main(void){
    int arr[] = {1,2,3};
    const int length = 3;

    //Verdoppeltes arr wird in doublearr gespeichert
    int *doublearr = twiceret(arr, length);

    int i; //Ausgabe des doppelten arr.
    for(i=0; i<length; i++)
        printf("[%i] ",doublearr[i]);

    return 0;
}

