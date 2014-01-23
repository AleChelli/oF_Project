#ifndef RandomWalker_h
#define RandomWalker_h

#include "ofMain.h"

class RandomWalker {
public:
    //Constructor
    RandomWalker();

    //Methods
    void display();
    void step();
    int returnX();
    int returnY();
    int returnZ();

    // Properties
    int x;
    int y;
    int z;
};
#endif

