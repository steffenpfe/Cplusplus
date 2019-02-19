#ifndef AUDIO_H
#define AUDIO_H
#include "medium.h"

class Audio : public Medium {
protected:
    string artist;
    // name of the artist

public:
    Audio(string artist="no",string title="no", string format="no");
    void show();
};

#endif // AUDIO_H
