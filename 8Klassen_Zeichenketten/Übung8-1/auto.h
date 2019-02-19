#ifndef AUTO_H
#define AUTO_H
#include <string>


class Auto
{
public:
    Auto(std::string farbe, bool automatik, bool schiebedach);
    std::string liesFarbe();
    bool hatAutomatik();
    bool hatSchiebedach();

private:
    std::string farbe;
    bool automatik;
    bool schiebedach;


};

#endif // AUTO_H
