#ifndef LIGHTBULB_H
#define LIGHTBULB_H


class Lightbulb{
    public:
    void switchOn();
    void switchOff();

    bool isOn();

    private:
    bool light;
};

#endif // LIGHTBULB_H
