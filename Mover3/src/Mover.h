#ifndef mover_h
#define mover_h

#include "ofMain.h"

class Mover {
public:
    Mover();

    void initialize(float m,float x,float y);
    void checkEdges();
    void applyForce(ofVec3f force);
    void update();
    void display();
    float getM();

    ofVec3f location;
    ofVec3f velocity;
    ofVec3f acceleration;
    float mass;
};
#endif // mover_h
