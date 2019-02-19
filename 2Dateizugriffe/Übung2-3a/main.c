#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Das Programm liest aus einer Textdatei Namen und die Anzahl der Namen ein und vergleicht diese mit
//eingegebenen Namen. Je nach Geschlecht werden dann die Anreden kommen.
int main(void)
{
    FILE *male;
    FILE *female;
    int tmp1, tmp2, length, counter=0;
    char str[20];
    char **maleArr;
    char **femaleArr;

    male = fopen("male.txt", "r");
    female = fopen("female.txt", "r");

    if(male == NULL)
        printf("File 'male.txt' does not exist!\n");
    if(female == NULL)
        printf("File 'female.txt' does not exist!\n");
    if((male != NULL) && (female != NULL)){
        while(!feof(male)){//Geht nacheinander bis zum Ende der Datei jede Zeile durch-> fscanf
            if(counter == 0){
                fscanf(male, "%i", &tmp1); //Zuerst Anzahl der Namen in .txt Datei holen
                maleArr = (char **) malloc(tmp1 * sizeof(char*)); //daraus dyn. Feld erstellen --2DIM
                counter++;
            }
            else{
                fscanf(male, "%s\n", str); //Einen Namen aus der Datei holen
                length = strlen(str); //Name ist nun in str--> Länge des Namen ermitteln
                maleArr[counter-1] = (char *) malloc(length * sizeof(char)); //Mit Länge dyn. Feld erzeugen.
                strcpy(maleArr[counter -1], str);
                counter++;
            }
        }

        counter=0;
        while(!feof(female)){
            if(counter == 0){
                fscanf(female, "%i", &tmp2); //tmp2 hat Anzahl der Namen, da am Anfang in .txt
                femaleArr = (char **) malloc(tmp2 * sizeof(char*));
                counter++;
            }
            else{
                fscanf(female, "%s\n", str);
                length = strlen(str);
                femaleArr[counter-1] = (char *) malloc(length * sizeof(char));
                strcpy(femaleArr[counter -1], str);
                counter++;
            }
        }
    }

    int i, p1, p2;
    printf("Gelesene weibliche Vornamen: ");
    for(i=0; i<tmp2; i++){
        printf("%s, ", femaleArr[i]);
    }
    printf("\nGelesene männliche Vornamen: ");
    for(i=0; i<tmp1; i++){
        printf("%s, ", maleArr[i]);
    }

    printf("\nGeben Sie einen Namen ein: ");
    gets(str);

    //Geht alle Namen durch und vergleicht mit eingeg. Namen
    //Liefert Zeiger wenn enthalten, sonst Nullzeiger!!
    for(i = 0; i < tmp1; i++){
        p1 = strstr(str, maleArr[i]);
        if(p1 !=0)
        break;
    }

    for(i = 0; i < tmp2; i++){
        p2 = strstr(str, femaleArr[i]);
        if(p2 !=0)
        break;
    }

    if(p2 !=0)
        printf("%s %s\n", "Ms.", str);
    if(p1 !=0)
        printf("%s %s\n", "Mr.", str);
    if(p1 == 0 && p2 == 0)
        printf("%s\n", str);

    return 0;
}
