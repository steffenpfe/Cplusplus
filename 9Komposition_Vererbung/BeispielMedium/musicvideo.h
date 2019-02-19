#ifndef MUSICVIDEO_H
#define MUSICVIDEO_H

#include <video.h>
#include <audio.h>
#include <string>
using namespace std;

class MusicVideo:
public Audio, public Video
 {
public:
    MusicVideo(string artist="no", /* Audio */
               string director="no", /* Video */
               /* Medium */
               string title="no", string format="no");
    void show();
};

#endif // MUSICVIDEO_H
