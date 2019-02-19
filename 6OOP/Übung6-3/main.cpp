#include <stdio.h>
#include "lightbulb.h"


//Glühlampe ein und ausschalten: l linke an, r rechts an, q terminert


int main(void)
{
    char c;
    int i;
    const int length = 4;


    Lightbulb arr[length];  //Feld aus der Klasse Lightbulb
    for(int i = 0; i < length; i++)
        arr[i] = Lightbulb();




    do{
        printf("Eingabe: ");
        scanf("\n%c", &c);

        if(c == 'e'){ //Bei e immer alle einschalten
            for(int i = 0; i < length; i++)
                arr[i].switchOn();
        }

        if(c == 'a'){ //Bei a immer alle ausschalten
            for(int i = 0; i < length; i++)
                arr[i].switchOff();
        }


        for(int i = 0; i < length; i++){
            printf("Lampe %i: ", i+1);

            if(arr[i].isOn() == true)
                printf("ein, ");
            else
                printf("aus, ");
        }
        printf("\n");

    }while(c != 'q');
    printf("Ade.\n");



    return 0;
}
