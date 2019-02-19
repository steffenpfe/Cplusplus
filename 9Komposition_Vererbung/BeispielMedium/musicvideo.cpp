#include "musicvideo.h"
#include <string>
using namespace std;

//Redundanzreduktion
MusicVideo::MusicVideo(string artist, string director,string title, string format):
Audio(artist, title, format),
Video(director, title, format) {}

void MusicVideo::show() {
    cout << "Director: " << director << ", ";
    Audio::show();
}



/*
//Auflösung der Doppeldeutigkeit!!!!!!
MusicVideo::MusicVideo(string artist, string director,string title, string format):
Audio(artist, title, format),
Video(director, title, format) {}// Reihenfolge muss mit Deklaration übereinstimmen

void MusicVideo::show() {
    cout << "Artist: " << artist;
    cout << ", Director: " << director;
    cout << ", " << Audio::title;
    cout << ", " << Audio::format << endl;
}
/*


/*
MusicVideo::MusicVideo(string artist, string director,string title, string format):
    Audio(artist, title, format),
    Video(director, title, format) {}

void MusicVideo::show() {
    cout << "Artist: " << artist;
    cout << ", Director: " << director;
    cout << ", " << title << ", " << format << endl;
}
*/
