#include "kunde.h"

//Mit den Daten die man bekommt jeweils wieder den Konstruktor der Unterklassen aufrufen
Kunde::Kunde(string kundennr, string firstName, string lastName, string street, string number, string city):
    customerID(kundennr),name(firstName, lastName),address(street, city, number){
    index = 0;
    maxIndex = 10;
    nArticle = new Ware[maxIndex]; //Feld dyn. erzeugen
}

void Kunde::neueWare(string bezeichnung, string preis, string datum) {

    if(index < maxIndex) {
        nArticle[index] = Ware(bezeichnung, preis, datum);
//        nArticle[index].articleName = bezeichnung;
//        nArticle[index].price = preis;
//        nArticle[index].date = datum;
        index++;
    }else{
        //cout << "Fehler. Zu viele Waren für diesen Kunden." << endl;
        //Jetzt wird ein neues größeres Feld dynamisch erzeugt.
        newArticleArr();
    }
}

string Kunde::toString() {
    int i;
    ostringstream strK;
    for(i=0; i<index; i++){
        strK << nArticle[i].toString();
    }

    return strK.str();
}

void Kunde::newArticleArr() {
    maxIndex += 10;
    Ware *newArr = new Ware[maxIndex];
    int i;
    for(i=0; i<index; i++) {
        newArr[i] = Ware(nArticle[i].articleName, nArticle[i].price, nArticle[i].date);
//        newArr[i].articleName = nArticle[i].articleName;
//        newArr[i].date = nArticle[i].date;
//        newArr[i].price = nArticle[i].price;
    }

    delete [] nArticle;
    nArticle = newArr;
}






