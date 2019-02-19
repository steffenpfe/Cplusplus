#include "vigenere.h"
#include <string>
using namespace std;

Vigenere::Vigenere() {
    abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    quadrat = new string[26];

    int i,j,l;



        for(i=0; i<26; i++){
            j=0;
            l=0;
            do{
                if(j+i <=25){
                    quadrat[i].append(abc, (j+i), 1);
                }
                if(j+i >25){
                    quadrat[i].append(abc, l, 1);
                    l++; //Um wieder bei A anzufangen wenn einmal durch
                }
                j++;
            }while(j<26);
        }

}

Vigenere::~Vigenere() {
    delete [] quadrat;
}

string Vigenere::verschluesseln(string str, string kennwort) {


    int strlength = str.length();
    int keylength = kennwort.length();

    string encryptedstring;
    string keywordarr;


    int i=0,j=0; //Hier wird das Hilfsfeld durch das Passwort erzeugt
    for(i=0; i<strlength; i++){
        keywordarr.append(kennwort, j, 1);
        j++;
        if(j > keylength-1)
            j=0;
    }


    //Verschlüsseln der Zeichenkette
    //Zuerst nach Stelle des Buchstabens im ABC suchen:
    //Wenn man die Stelle hat kann aus beiden der result. Buchstabe im VigenereQuadrat bestimmt werden
    int positionstring; //horizontale Komponente zur Bestimmung des Bcuhstabend im 2DIM Feld
    int positionkeyword;
    for(i=0; i<strlength; i++){
        positionstring = abc.find(str[i], 0); //Liefert das Feldelement
        positionkeyword = abc.find(keywordarr[i], 0);

        //Mit der Position kann nur der verschlüsselte Buchstabe in sein Feld geschrieben werden:
        encryptedstring.append(quadrat[positionkeyword], positionstring, 1);
    }


    return encryptedstring;

}
