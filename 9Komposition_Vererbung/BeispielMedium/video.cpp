#include "video.h"
#include "medium.h"

Video::Video(string director, string title, string format):
Medium(title, format), director(director) {}


/* Besser: */
void Video::show() {
cout << "Director: " << director << ", ";
Medium::show();
}
