#include <stdio.h>
#include <stdlib.h>

//2DIM feld dynamisch erzeugen und nxn Optik erstellen
int** keysum(int n){
    //Speicher für 2DIM Feld anfordern
    int **keysumarr = (int **) malloc(n * sizeof(int));
    int i, j;

    for(i=0; i<n; i++){
        keysumarr[i] = (int *) malloc(n*sizeof(int));
        for(j=0; j<n; j++)
            keysumarr[i][j] = i+j;
    }

    return keysumarr;
}


int main(void){
    int n;
    int i,j;
    printf("Bitte geben Sie n ein: ");
    scanf("%i", &n);

    int **arr = keysum(n);

    //Feld ausgeben
    for(i=0; i<n; i++){
        printf("\n");
        for(j=0; j<n; j++)
            printf("[%i] ", arr[i][j]);
    }

    return 0;
}
