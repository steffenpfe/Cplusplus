#ifndef NAME_H
#define NAME_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Name {
public:
    Name(string firstName, string lastName);
    string toString();

private:
    string firstName;
    string lastName;
};

#endif // NAME_H
