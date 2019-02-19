#include "auto.h"

Auto::Auto(std::string farbe, bool automatik, bool schiebedach)
{
    this->farbe = farbe;
    this->automatik = automatik;
    this->schiebedach = schiebedach;
}

std::string Auto::liesFarbe() {
    return farbe;
}

bool Auto::hatAutomatik() {
    return automatik;
}

bool Auto::hatSchiebedach() {
    return schiebedach;
}



