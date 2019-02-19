#ifndef WARE_H
#define WARE_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Ware
{
public:
    Ware();
    Ware(string pArticleName, string pPrice, string pDate);
    string toString();


    string articleName;
    string price;
    string date;




};

#endif // WARE_H
