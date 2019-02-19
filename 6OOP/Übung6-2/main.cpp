#include <stdio.h>
#include "lightbulb.h"


//Glühlampe ein und ausschalten: l linke an, r rechts an, q terminert


int main(void)
{
    char c;
    Lightbulb left, right;

    do{
        printf("Eingabe: ");
        scanf("\n%c", &c);

        if(c == 'l'){ //Linkes Licht an
            if(left.isOn() == true) // true = 1
                left.switchOff();
            else
                left.switchOn();
        }

        if(c == 'r'){
            if(right.isOn() == true)
                right.switchOff();
            else
                right.switchOn();
        }

        if(c != 'q'){
            if(left.isOn() == 1)
                printf("Links ein.\n");
            else
                printf("Links aus.\n");

            if(right.isOn() == 1)
                printf("Rechts ein.\n");
            else
                printf("Rechts aus.\n");
        }

    }while(c != 'q');
    printf("Ade.\n");



    return 0;
}

