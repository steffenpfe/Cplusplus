#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Erstelle das VigenereQuadrat als 2DIM Feld
//VigenereQuadrat: Horizontal ist Nachricht und vertikal Codewort
char** vigenereQuadrat(){
    char abc[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char **vigenerearr = (char **) malloc(26*sizeof(char*));
    //bei sizeof muss nach char* ein "*", da er 26 mal ein 1Dim Feld im 2Dim Feld bereitstellen soll
    int i,j,l;

    for(i=0; i<26; i++){
        vigenerearr[i] = (char *) malloc(26*sizeof(char));
        j=0;
        l=0;
        do{
            if(j+i <=25)
                vigenerearr[i][j] = abc[j+i];
            if(j+i >25){
                vigenerearr[i][j] = abc[l];
                l++; //Um wieder bei A anzufangen wenn einmal durch
            }
            j++;
        }while(j<26);
    }

    return vigenerearr;
}


int main(void)
{
    char **vigenereQuadratArr = vigenereQuadrat();

    char stringtoosafe[100];
    char keyword[100];
    int strlength, keylength;


    printf("Zeichenkette in in GROßBUCHSTABEN und ohne Leerzeichen eingeben.\n");
    printf("Zu verschluesselnde Zeichenkette: ");
    gets(stringtoosafe);

    printf("Kennwort: ");
    gets(keyword);

    strlength = strlen(stringtoosafe);
    keylength = strlen(keyword);

    char *keywordarr = (char *) malloc(strlength * sizeof(char*));
    char *encryptedstring = (char *) malloc(strlength * sizeof(char*));

    int i=0,j=0; //Hier wird das Hilfsfeld durch das Passwort erzeugt
    for(i=0; i<strlength; i++){
        keywordarr[i] = keyword[j];
        j++;
        if(j > keylength-1)
            j=0;
    }

    printf("Hilfsfeld: ");
    for(i=0; i<strlength; i++){
        printf("%c", keywordarr[i]);
    }

    //Verschlüsseln der Zeichenkette
    char abc[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //Zuerst nach Stelle des Buchstabens im ABC suchen:
    //Wenn man die Stelle hat kann aus beiden der result. Buchstabe im VigenereQuadrat bestimmt werden
    int positionstring; //horizontale Komponente zur Bestimmung des Bcuhstabend im 2DIM Feld
    int positionkeyword;
    for(i=0; i<strlength ; i++){
        positionstring = strchr(abc, stringtoosafe[i]) - abc; //Liefert das Feldelement
        positionkeyword = strchr(abc, keywordarr[i]) - abc;

        //Mit der Position kann nur der verschlüsselte Buchstabe in sein Feld geschrieben werden:
        encryptedstring[i] = vigenereQuadratArr[positionkeyword][positionstring];
    }

    printf("\nVerschlüsselte Zeichenkette: ");
    for(i=0; i<strlength; i++){
        printf("%c", encryptedstring[i]);
    }





    //Ausgabe des 2DIM ARRAYS
    for(i=0; i<26; i++){
        printf("\n");
        for(j=0; j<26; j++)
            printf("[%c] ", vigenereQuadratArr[i][j]);
    }


    return 0;
}

