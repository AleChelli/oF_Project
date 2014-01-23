
#include "RandomWalker.h"
RandomWalker::RandomWalker(){
    x= ofGetWindowWidth()/2;
    y=ofGetWindowHeight()/2;
}

void RandomWalker::display(){
    ofSetColor(ofColor::black);
}

void RandomWalker::step(){
        int choice = ofRandom(4);
        if (choice == 0){
            x++;
        } else if (choice==1){
            x--;
        } else if (choice==2) {
            y++;
        } else {
            y--;
        }
}

int RandomWalker::returnX(){
    return x;
}

int RandomWalker::returnY(){
    return y;
}
