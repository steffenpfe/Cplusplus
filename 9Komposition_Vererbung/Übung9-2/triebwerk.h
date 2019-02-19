#ifndef TRIEBWERK_H
#define TRIEBWERK_H

#include <iostream>

using namespace std;

class Triebwerk
{
public:
    Triebwerk(string pSide);
    void TriebwerkStart();
    void TriebwerkStop();

private:
    string whichSide;

};

#endif // TRIEBWERK_H
