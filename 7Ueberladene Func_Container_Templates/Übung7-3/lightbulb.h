#ifndef LIGHTBULB_H
#define LIGHTBULB_H


class Lightbulb{
    public:
    void switchOn();
    void switchOff();
    bool isOn();
    const char* getColor();
    Lightbulb(const char* pColor = "white");

    private:
    bool light;
    const char *color;
};

#endif // LIGHTBULB_H
