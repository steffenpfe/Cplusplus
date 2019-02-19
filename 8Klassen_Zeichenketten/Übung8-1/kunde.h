#ifndef KUNDE_H
#define KUNDE_H

#include <string>

class Kunde
{
public:
    Kunde(std::string nachname, std::string vorname, std::string str,
          std::string nr, std::string ort);
    std::string liesNachname();
    std::string liesVorname();
    std::string liesStr();
    std::string liesNr();
    std::string liesOrt();


private:
    std::string nachname;
    std::string vorname;
    std::string str;
    std::string nr;
    std::string ort;

};

#endif // KUNDE_H
