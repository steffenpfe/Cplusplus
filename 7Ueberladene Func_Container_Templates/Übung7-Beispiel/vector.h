#ifndef VECTOR_H
#define VECTOR_H

#include <string>
using namespace std;

class vector {
private:
    int dim;
    float *vec;

public:
    vector(int dim);
    vector(const vector & pvec); //Für die Kopierkonstruktor
    ~vector();
    void write(float fvec[]);
    string toString();
};

#endif // VECTOR_H
