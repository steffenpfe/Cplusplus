#include <stdio.h>
#include "Lightbulb.h"


/*int main(){
    Lightbulb lb;

    //lb.switchOn();
    lb.switchOff();
    //lb.light = true; ->light in public ziehen!!
    bool lightState = lb.isOn();

    if (lightState == true)
        printf("Lightbulb on\n");
    else
        printf("Lightbulb off\n");
}*/




int main() //Mehrere Variablen erzeugen
{
    Lightbulb lbLeft, lbRight;

    //lbLeft.switchOn();
    lbLeft.switchOff();
    lbRight.switchOn();
    //lbRight.switchOff();

    printf("Left: %i\nRight: %i\n", lbLeft.isOn(), lbRight.isOn());
}
