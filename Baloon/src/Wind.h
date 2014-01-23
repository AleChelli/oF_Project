#ifndef Wind_h
#define Wind_h

#include "ofMain.h"

class wind{
public:
    wind();

    ofVec3f update();

    ofVec3f windv;
    float tx;
    float ty;

};
#endif // Wind_h
