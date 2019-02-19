#ifndef BENUTZER_H
#define BENUTZER_H

#include <string>
#include "auftrag.h"

class Benutzer
{
public:
    Benutzer(std::string name);
    Auftrag* neuerAuftrag();



private:
   std::string name;
   char modus;




};

#endif // BENUTZER_H
