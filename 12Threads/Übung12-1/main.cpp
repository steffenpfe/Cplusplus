#include <QCoreApplication>
#include <thread>
#include <iostream>

//Für kritische Abschnitte- gegenseitiger Auschluss
#include <mutex>

using namespace std;
using namespace this_thread;

mutex m;

//Teil 1: Thread und Hauptprogramm synchronisiert
//void workload() {
//for (int i=0; i<4; i++) {
//    cout << i << ", ";
//    this_thread::sleep_for(chrono::seconds(2));
//}
//    cout << "\nThread terminated\n";
//}

//Teil 2: Meherere nacheinander laufende Threads
//void workload(int threadNo) {
//    for (int i=0; i<4; i++) {
//        cout << "Thread " << threadNo << "(" << i << ")" << endl;
//    sleep_for(chrono::milliseconds(200));
//    }
//    cout << "Thread " << threadNo << ": Terminated" << endl;
//}

//Teil 3: Thread Funktion mit kritischem Abschitt
//void workload(int threadNo) {
//    for (int i=0; i<4; i++) {
//        m.lock();
//        cout << "Thread " << threadNo;
//        cout << "(" << i << ")" << endl;
//        m.unlock();
//        sleep_for (chrono::milliseconds(200));
//    }
//    m.lock();
//    cout << "Thread " << threadNo;
//    cout << ": Terminated" << endl;
//    m.unlock();
//}

void child() {
    cout << "Child thread started\n";
    sleep_for(std::chrono::seconds(2));
    cout << "Child thread terminated\n";
}

void parent(){
    cout << "Parent threat: Creating child\n";
    thread t(child);
    //Ohne Detach ist t an die Lebensdauer von parent() gekoppelt
    t.detach(); // t ist nun Hintergrund-Thread
    sleep_for(std::chrono::seconds(1));
    cout << "Parent thread terminated\n";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


//Teil 1: Thread und Hauptprogramm synchronisiert
//    thread aThread(workload);
//    aThread.join();
//    cout << "\nMain: After Thread\n";

//Teil 2: Meherere nacheinander laufende Threads
//    const int numOfThreads = 3;
//    thread t[numOfThreads];
//    for (int i=0; i<numOfThreads; i++) {
//        cout << "Making Thread " << i << endl;
//    t[i] = thread(workload, i);
//    t[i].join();
//    }

//Teil 3: Thread Funktion mit kritischem Abschitt
//    const int numOfThreads = 3;
//    thread t[numOfThreads];
//    for (int i=0; i<numOfThreads; i++) {
//        m.lock();
//        cout << "Making Thread " << i << endl;
//        m.unlock();
//        t[i] = thread(workload, i);
//    }
//    for (int i=0; i<numOfThreads; i++) {
//        t[i].join();
//    }
//    cout << "\nMain: All threads terminated\n";



    thread t(parent);
    t.join();
    // Auf Termination von Child warten,
    // damit noch alle Ausgaben aus dem Child
    // auf der Konsole erscheinen
    sleep_for(std::chrono::seconds(3));






    return a.exec();
}
