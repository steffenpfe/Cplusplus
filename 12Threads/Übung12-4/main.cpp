#include <QCoreApplication>
#include <mutex>
#include <thread>
#include <math.h>
#include <iostream>
#include <chrono>
using namespace std;

//wmic cpu get NumberOfCores
//NumberOfCores: 2 --> Primzahlsuche  mit 2 Threads
//Sonst wird mehr als ein Thread auf Kern plaziert

mutex m;

void primzahl(int start, int ende, int which) {
    std::chrono::time_point<std::chrono::system_clock> tstart, tend;
    int j, i;
    tstart = std::chrono::system_clock::now();

    bool gefunden = 1;
    for(i = start; i < ende+1; i++) {
        gefunden = 1;
        for(j=2; j<=(int) sqrt(i); j++) {
            if((i % j) == 0) {
                gefunden = 0;
                break;
            }
        }
//        if(gefunden)
//            cout << i << ", ";
    }

    tend = std::chrono::system_clock::now();
    m.lock();
    std::chrono::duration<double> elapsed_seconds = tend-tstart;
    std::cout << "Thread " << which << ": " << elapsed_seconds.count() << "s benötigt" << endl;
    m.unlock();
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::chrono::time_point<std::chrono::system_clock> tstart, tend;
    tstart = std::chrono::system_clock::now();

    thread t1(primzahl, 2, 300000, 1);
    thread t2(primzahl, 300000, 500000, 2);
//    thread t3(primzahl, 500000, 800000, 1);
//    thread t4(primzahl, 800000, 1000000, 2);

    t1.join();
    t2.join();
//    t3.join(); Wird nur wenig schneller wenn mehr Threads als Kerne
//    t4.join();
    tend = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = tend-tstart;
    std::cout << "Zeit im Hauptprogramm: " << elapsed_seconds.count() << "s" << endl;



    return a.exec();
}





