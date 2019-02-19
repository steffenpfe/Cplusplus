#include "kunde.h"

Kunde::Kunde(std::string nachname, std::string vorname, std::string str,
      std::string nr, std::string ort) {
    this->nachname = nachname;
    this->vorname = vorname;
    this->str = str;
    this->nr = nr;
    this->ort = ort;
}

std::string Kunde::liesNachname() {
    return nachname;
}

std::string Kunde::liesVorname() {
    return vorname;
}

std::string Kunde::liesStr() {
    return str;
}

std::string Kunde::liesNr() {
    return nr;
}

std::string Kunde::liesOrt() {
    return ort;
}

