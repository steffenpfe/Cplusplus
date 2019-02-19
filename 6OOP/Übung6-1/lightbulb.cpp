#include "lightbulb.h"


void Lightbulb::switchOn(){
light = true;
}

void Lightbulb::switchOff(){
light = false;
}

bool Lightbulb::isOn(){
return light;
}
