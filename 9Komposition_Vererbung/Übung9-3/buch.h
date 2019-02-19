#ifndef BUCH_H
#define BUCH_H

#include <string>
#include <sstream>
using namespace std;



class Buch
{
public:
    Buch(string pAutor, string pTitel, string pISBN = "n. v.");
    string toString();


private:
    string Autor;
    string Titel;
    string ISBN;



};

#endif // BUCH_H
