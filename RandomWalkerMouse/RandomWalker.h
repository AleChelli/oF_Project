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

    // Properties
    int x;
    int y;
};
#endif
