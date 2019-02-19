#include <stdio.h>
#include <stdlib.h>



//Schreiben und Lesen ohne dynamisches Feld!!
/*void writebin(int arr[]){
    FILE *file;
    //File erzeugen und das übergebene arr in die file schreiben
    if((file = fopen("bin.dat", "wb")) == NULL) {
    printf("Cannot create file!\n");
    return -1;
    }
    else {
    fwrite(arr, sizeof(int), 6, file);
    fclose(file);
    return 0;
    }


}

void readbin(){
    FILE *file;
    int arr2[3][2];
    int i; //File wieder öffnen und das Feld in das arr2 schreiben bzw. lesen
    if((file = fopen("bin.dat", "rb")) == NULL) {
    printf("Cannot open file!\n");
    return -1;
    }
    else {
    fread(arr2, sizeof(int), 6, file);
    fclose(file);
    for (i=0; i<3; i++)
    printf("[%i] [%i]\n", arr2[i][0], arr2[i][1]);
    return 0;
    }
}
*/


    //Schreiben und lesen mit dynamischen Feld!
//arr wird dynamisch erzeugt und initialisiert--> in erzeugte Textdatei geschrieben
void writebin(void){
    FILE *file;
    int i;
    int **arr = (int **) malloc(3*sizeof(int*));
    for (i=0; i<3; i++)
    arr[i] = (int *) malloc(2*sizeof(int));
    arr[0][0] = 1; arr[0][1] = 2; arr[1][0] = 3;
    arr[1][1] = 4; arr[2][0] = 5; arr[2][1] = 6;

    if((file = fopen("bin.dat", "wb")) == NULL){
        printf("Cannot create file!\n");
    }
    else{
    for(i=0; i<3; i++) //Zeilenweise schreiben
    fwrite(arr[i], sizeof(int), 2, file);
    }
    fclose(file);


}

//Feld wird dynamisch erzeugt und aus Datei in arr gelesen
 void readbin(){
     FILE *file;
     int i;
     int **arr = (int **) malloc(3*sizeof(int*));
     for (i=0; i<3; i++)
     arr[i] = (int *) malloc(2*sizeof(int));
     if((file = fopen("bin.dat", "rb")) == NULL){
         printf("Cannot open file!\n");
     }
     else {
     for (i=0; i<3; i++) // Zeilenweise lesen
     fread(arr[i], sizeof(int), 2, file);
     }
     fclose(file);

     for(i=0; i<3; i++){
         printf("[%i] [%i]\n", arr[i][0], arr[i][1]);
     }
 }




int main(void)
{
    writebin(); //Das arr in eine .dat Datei schreiben

    readbin();
    return 0;
}


