#include <stdio.h>
#include <stdlib.h>

//2DIM feld dynamisch erzeugen und nxn Optik erstellen
int** keysum(int n){
    //Speicher für 2DIM Feld anfordern
    int **keysumarr = (int **) malloc(n * sizeof(int*));
    int i, j;

    for(i=0; i<n; i++){
        keysumarr[i] = (int *) malloc(n*sizeof(int));
        for(j=0; j<n; j++)
            keysumarr[i][j] = i+j;
    }

    return keysumarr;
}

//Funktion speichert ein nxn Feld in einer bin.dat File
void safeInFile(int **arr, int n){
    FILE *file;
    int i;

    if((file = fopen("bin.dat", "wb")) == NULL){
        printf("Cannot create file!\n");
    }
    else{
        for(i=0; i<n; i++)
            fwrite(arr[i], sizeof(int), n, file);
        fclose(file);
    }
}

//Funktion überschreibt das Feld mit 0
void overwriteFile(int **arr, int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            arr[i][j] = 0;
    }
}

//Funktion lest arr aus einer Datei und gibt es aus
void readFile(int **arr, int n){
    FILE *file;
    int i;

    if((file = fopen("bin.dat", "rb")) == NULL)
        printf("Cannot open file!\n");
    else{
        for(i=0; i<n; i++){
            fread(arr[i], sizeof(int), n, file);
        }
        fclose(file);
    }
}

//Funktion gibt **arr aus
void print(int **arr, int n){
    int i, j;
    for(i=0; i<n; i++){
        printf("\n");
        for(j=0; j<n; j++)
            printf("[%i] ", arr[i][j]);
    }
}


int main(void){
    int n;
    int i,j;
    printf("Bitte geben Sie n ein: ");
    scanf("%i", &n);

    int **arr = keysum(n);

    //Feld ausgeben: zu speicherndes Feld
    printf("\nZu speicherndes Feld: ");
    print(arr, n);

    safeInFile(arr, n);

    overwriteFile(arr, n);
    printf("\nUeberschriebenes Feld: ");
    print(arr, n);

    readFile(arr, n);
    printf("\nEingelesenes Feld: ");
    print(arr, n);

    return 0;
}
