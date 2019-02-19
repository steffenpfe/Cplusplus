#ifndef BUCH_H
#define BUCH_H

#include <string>
#include <sstream>
using namespace std;



class Buch
{
public:
    Buch(string pAutor, string pTitel, string pISBN = "n. v.");
    virtual string toString();
    //virtual schaltet dynamische Typprüfung zur Laufzeit des Programm ein


private:
    string Autor;
    string Titel;
    string ISBN;


};

#endif // BUCH_H
