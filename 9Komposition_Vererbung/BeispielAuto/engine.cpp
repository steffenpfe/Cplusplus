#include "engine.h"

#include <iostream>
using namespace std;

void Engine::start() {
cout << "Engine started" << endl;
}

void Engine::stop() {
cout << "Engine stopped" << endl;
}

void Engine::accelerator(int rpm) {
cout << rpm << "rpm" << endl;
}
