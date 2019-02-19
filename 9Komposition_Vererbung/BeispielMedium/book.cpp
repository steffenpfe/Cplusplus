#include "book.h"
#include "medium.h"

Book::Book(string author, string title, string format):
Medium(title, format), author(author) {}


/* Besser: */
void Book::show() {
cout << "Author: " << author << ", ";
Medium::show();
}
