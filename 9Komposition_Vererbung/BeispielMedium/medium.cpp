#include "medium.h"

Medium::Medium(string title, string format):
title(title), format(format) {}

void Medium::show() {
cout << title << ", " << format << endl;
}
