#include "lightbulb.h"

Lightbulb::Lightbulb(const char* color) {
    this->color = color;
}

const char* Lightbulb::getColor() {
    return color;
}

void Lightbulb::switchOn(){
light = true;
}

void Lightbulb::switchOff(){
light = false;
}

bool Lightbulb::isOn(){
return light;
}
