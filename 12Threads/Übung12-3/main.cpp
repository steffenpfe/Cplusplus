#include <QCoreApplication>
#include <thread>
#include <math.h>
#include <iostream>
#include <chrono>
using namespace std;

using namespace this_thread;


int i=0;

void primzahl(int start, int ende) {
    int j;
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
}




int main(int argc, char *argv[])
{
    const int ende = 10000000;
    QCoreApplication a(argc, argv);
    thread t(primzahl, 2, ende);


    int counter = 1;

    do{
        sleep_for(std::chrono::seconds(1));
        cout << counter << "s: " << i << " erreciht. Zahlen/s: " << i/counter <<endl;
        counter++;
    }while(i <= ende);

    t.join();


    return a.exec();
}
