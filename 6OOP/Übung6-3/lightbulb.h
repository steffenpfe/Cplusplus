#ifndef LIGHTBULB_H
#define LIGHTBULB_H

class Lightbulb{
    public:
    void switchOn();
    void switchOff();

    Lightbulb(); //Wird bei erzeugung von Objekt aufgerufen-- damit light= false!!

    bool isOn();

    private:

    bool light;
};

#endif // LIGHTBULB_H
