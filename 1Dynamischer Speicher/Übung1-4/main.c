#include <stdio.h>
#include <stdlib.h>


//3DIM Feld --Speicher anfordern und ausgeben
int*** xyzkeysum(int x, int y, int z){
    int ***xyzarr = (int **) malloc(z * sizeof(int));
    int i,j,k;

    //z ist anzahl der 2DIM Felder....x+y spannen 2D Feld auf
    for(i=0; i<z; i++){
        xyzarr[i] = (int **) malloc(x*sizeof(int));
        for(j=0; j<x; j++){
            xyzarr[i][j] = (int *) malloc(y*sizeof(int));
            for(k=0; k<y; k++)
                xyzarr[i][j][k] = i+j+k;
        }
    }
    return xyzarr;
}


int main(void){
    int x,y,z;
    int i,j,k;
    printf("Bitte geben Sie x ein: ");
    scanf("%i", &x);
    printf("Bitte geben Sie y ein: ");
    scanf("%i", &y);
    printf("Bitte geben Sie z ein: ");
    scanf("%i", &z);

    int ***arr = xyzkeysum(x,y,z);

    //Ausgabe des 3DIM Felds:
    for(i=0; i<z; i++){
        printf("\n\n");
        for(j=0; j<x; j++){
            printf("\n");
            for(k=0; k<y; k++)
                printf("[%i] ", arr[i][j][k]);
        }
    }

    return 0;
}
