#include <stdio.h>
#include <stdlib.h>

//Dynamisch Speicher anfordern und Felder addieren
int* vadd(int arr1[], int arr2[], int length){
    int *addarr = (int *) malloc(length * sizeof(int));
    int i;

    //arr1 und arr2 int addarr addieren:
    for(i=0; i<length; i++)
        addarr[i] = arr1[i] + arr2[i];

    return addarr;
}


int main(void){
    int arr1[] = {1,2,3};
    int arr2[] = {4,5,6};
    const int length = 3;

    //newarr muss Pointer sein!
    int *newarr = vadd(arr1, arr2, length);

    int i; //Ausgabe des neuen arr.
    for(i=0; i<length; i++)
        printf("[%i] ",newarr[i]);

    return 0;
}
