#ifndef VIDEO_H
#define VIDEO_H
#include "medium.h"

class Video : public Medium {
protected:
    string director;
    // name of the artist

public:
    Video(string director="no",string title="no", string format="no");
    void show();
};
#endif // VIDEO_H
