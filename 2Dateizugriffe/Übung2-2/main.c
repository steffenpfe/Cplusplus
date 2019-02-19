#include <stdio.h>

int main(void)
{
    FILE *file;
    char str[100];

    if((file = fopen("text.txt", "r")) == NULL){//Datei öffnen zum lesen
        printf("File does not exist!\n");
        return -1;
    }
    else{
        FILE *file2; //2 Datei für die Kopie

        if((file2 = fopen("copy.txt", "w")) == NULL){ //Datei erzeugen zum schreiben
            printf("Cannot create file!\n");
        }
        else{
            while(!feof(file)){ //feof: File end of file --geht bis zum ende der text.txt durch
                fgets(str, 100, file); //Holt sich 100 Zeichen aus text.txt
                fprintf(file2, str); //Schreibt diese 100 Zeichen in die copy.txt
                printf("%s", str);
            }
        }

        fclose(file);
        fclose(file2);
        return 0;
    }
}

