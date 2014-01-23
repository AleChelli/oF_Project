#ifndef balloon_h
#define balloon_h

#include "ofMain.h"
#include "Wind.h"

class balloon {
public:
    balloon();

    void update();
    void display();

    ofVec3f location;
    ofVec3f velocity;
    ofVec3f acceleration;
    wind w;

};
#endif // balloon_h
