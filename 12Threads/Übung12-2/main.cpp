#include <QCoreApplication>
#include <math.h>
#include <iostream>
#include <chrono>
using namespace std;


void primzahl(int start, int ende) {
    int i,j;
    bool gefunden = 1;
    for(i = start; i < ende+1; i++) {
        gefunden = 1;
        for(j=2; j<=(int) sqrt(i); j++) {
            if((i % j) == 0) {
                gefunden = 0;
                break;
            }
        }
        if(gefunden)
            cout << i << ", ";

    }

}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
     cout << "Berechne Primzahlen...";
     std::chrono::time_point<std::chrono::system_clock> tstart, tend;

     tstart = std::chrono::system_clock::now();
     primzahl(2, 1000000);
     tend = std::chrono::system_clock::now();

     cout << "fertig.\n";
     std::chrono::duration<double> elapsed_seconds = tend-tstart;
     std::cout << "Benoetigte Zeit: " << elapsed_seconds.count() <<  "s\n";

    return a.exec();
}
