#ifndef MEDIUM_H
#define MEDIUM_H

#include <string>
#include <iostream>
using namespace std;

class Medium {
protected:
    string title;  // name of the item
    string format; // mp3, mov, mpg,...
public:
    Medium(string title="no", string format="no");
    void show();
};

#endif // MEDIUM_H
