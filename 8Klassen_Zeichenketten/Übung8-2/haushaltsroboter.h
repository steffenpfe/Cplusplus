#ifndef HAUSHALTSROBOTER_H
#define HAUSHALTSROBOTER_H

#include "benutzer.h"
#include "auftrag.h"

class Haushaltsroboter
{
public:
    void empfangen(Auftrag *a);


private:
    void saugen();
    void wischen();

};

#endif // HAUSHALTSROBOTER_H
