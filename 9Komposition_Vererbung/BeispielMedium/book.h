#ifndef BOOK_H
#define BOOK_H
#include "medium.h"

class Book : public Medium {
protected:
    string author;
    // name of the artist

public:
    Book(string author="no",string title="no", string format="no");
    void show();
};

#endif // BOOK_H
