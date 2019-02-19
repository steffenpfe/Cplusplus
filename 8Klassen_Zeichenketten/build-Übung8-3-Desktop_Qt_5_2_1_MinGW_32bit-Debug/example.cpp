#include <QCoreApplication>


// Testdatei fuer die Kommentarextraktion


// Die main-Funktion wird bei Programmstart automatisch aufgerufen
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv); // Einrichten einer Kommandozeilenanwendung
    std::string test = "Hallo Welt"; // Ausgabe einer Beispielzeichenkette

    std::cout << test;

    return a.exec(); // Fertig
}
