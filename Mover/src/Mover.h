#ifndef mover_h
#define mover_h

#include "ofMain.h"

class Mover {
public:
    Mover();

    void checkEdges();
    void update(int mouseX,int mouseY);
    void display();

    ofVec3f location;
    ofVec3f velocity;
    ofVec3f acceleration;
    float topspeed;
};
#endif // mover_h
