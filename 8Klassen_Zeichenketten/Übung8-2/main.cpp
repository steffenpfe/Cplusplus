#include <iostream>
#include "auftrag.h"
#include "benutzer.h"
#include "haushaltsroboter.h"

using namespace std;

int main()
{
    Benutzer person("Paul");
    Haushaltsroboter Bot;

    int i;

    for(i=0; i<1; i++)
        Bot.empfangen(person.neuerAuftrag());





    return 0;
}

