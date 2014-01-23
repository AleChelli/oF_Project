#include "RandomWalker.h"
RandomWalker::RandomWalker(){
    x= ofGetWindowWidth()/2;
    y=ofGetWindowHeight()/2;
}

void RandomWalker::display(){
    ofSetColor(ofColor::black);
    ofVertex(x,y,0);
}

void RandomWalker::step(){
        int choice = int(random(4));
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
