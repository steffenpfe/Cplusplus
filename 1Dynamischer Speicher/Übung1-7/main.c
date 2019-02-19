#include <stdio.h>


int** pascal(int n){
    int **arr = (int **) malloc((n+1) * sizeof(int*));
    int row, column;
    int i;

    //Es soll ein dynamisches 2DIM Feld als Pascaldreieck erzeugt werden.
    //Die Anzahl der Feldelemente ist unterschiedlich-->Deshalb wird immer
    //an der ersten Feldstelle die Information über die Länge gespeichert.

    for(row=0; row<n+1; row++){
        arr[row] = (int *) malloc((row+2) * sizeof(int)); //+2, da Feldlänge und +1 noch dazu kommt
        arr[row][0] = row+2; //Länge speichern..
        arr[0][1] = 1;

        if(row==1){
            arr[1][1] = 1;
            arr[1][2] = 1;
        }

        for(column=1; column<row+2; column++){
            if(row<2)
                break;

            if(column==1 || column==row+1)
                arr[row][column] = 1;
            else{
                arr[row][column] = arr[row-1][column-1] + arr[row-1][column];
            }
        }
    }

    return arr;
}




int main(void)
{
    int n;

    printf("Bitte geben Sie n ein: ");
    scanf("%i", &n);
    int **arr = pascal(n);
    int i,j;

    for(i=0; i<n+1; i++){ //Ausgabe des Felds
        printf("\nn = %i: ",i);
        for(j=1; j<arr[i][0]; j++){
            printf("[%2i] ", arr[i][j]);
        }
    }
    return 0;
}

