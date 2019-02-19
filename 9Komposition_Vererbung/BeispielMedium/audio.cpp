#include "audio.h"
#include "medium.h"

Audio::Audio(string artist, string title, string format):
Medium(title, format), artist(artist) {}


/* Codepulikation
void Audio::show() {
cout << "Artist: " << artist;
cout << ", " << title << ", " << format << endl;
} */


/* Besser: */
void Audio::show() {
cout << "Artist: " << artist << ", ";
Medium::show();
}
