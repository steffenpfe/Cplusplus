#ifndef ENGINE_H
#define ENGINE_H

class Engine {
    public:
    void start(); // Motor starten
    void stop();  // Motor stoppen
    void accelerator(int rpm); // Drehzahl ändern
};

#endif // ENGINE_H
