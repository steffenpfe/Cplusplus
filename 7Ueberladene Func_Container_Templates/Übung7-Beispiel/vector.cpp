#include "vector.h"
#include <sstream>
#include <string>

vector::vector(int pdim):dim(pdim) {
    vec = new float[pdim];
}

vector::vector(const vector & pvec) {//Für Kopierkonstruktor
    dim = pvec.dim;
    vec = new float[dim]; // Eigener Speicher

    for (int i=0; i<dim; i++)
        vec[i] = pvec.vec[i];
}

vector::~vector() {
    delete vec;
}

string vector::toString() {
std::ostringstream strout;
    for (int i=0; i<dim; i++) {
        strout << "[" << vec[i] << "]" << endl;
    } // to_string: unnütze Nachkommastellen

    return strout.str();
}

void vector::write(float fvec[]) {
    for (int i=0; i<dim; i++) {
        vec[i] = fvec[i];
    }
}
