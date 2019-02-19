#include "Lightbulb.h"

Lightbulb::Lightbulb(){
    light = false;
}

void Lightbulb::switchOn() {
    light = true;
}

void Lightbulb::switchOff() {
    light = false;
}

bool Lightbulb::isOn() {
    return light;
}


