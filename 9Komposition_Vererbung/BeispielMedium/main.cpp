#include <iostream>
#include "medium.h"
#include "audio.h"
#include "video.h"
#include "book.h"
#include "musicvideo.h"

using namespace std;

int main()
{
    Audio m1("An Artist", "A Song", "mp3");
    Book  m2("An Author", "A Title", "pdf");
    Video m3("A director", "A Movie", "webm");
    m1.show();
    m2.show();
    m3.show();

    MusicVideo vid("Steffen", "Tom", "Test", "mp7");
    vid.show();

    return 0;
}

