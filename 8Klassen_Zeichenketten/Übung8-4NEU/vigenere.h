#ifndef VIGENERE_H
#define VIGENERE_H

#include <string>
using namespace std;
class Vigenere
{
public:
    Vigenere();
    string verschluesseln(string str, string kennwort);
    ~Vigenere();

private:
    string *quadrat;
    string abc;
};

#endif // VIGENERE_H
