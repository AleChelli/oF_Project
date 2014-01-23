#include "Mover.h"


Mover::Mover(){
    location.set(ofGetWindowWidth()/2, ofGetWindowHeight()/2,0);
    velocity.set(0,0,0);
    topspeed=6;
}

void Mover::checkEdges(){
    if (location.x>ofGetWindowWidth()){
        location.x=0;
    } else if (location.x<0) {
        location.x=ofGetWindowWidth();
    }
    if (location.y>ofGetWindowHeight()){
        location.y=0;
    } else if (location.y<0){
        location.y=ofGetWindowHeight();
    }

}

void Mover::update(int mouseX,int mouseY){
    ofVec3f mouse(mouseX,mouseY,0);
    ofVec3f dir;
    dir =mouse - location;
    dir.normalize();
    //dir=dir*0.5;
    acceleration=dir;
    velocity+=acceleration;
    velocity.limit(topspeed);
    location+=velocity;

}

void Mover::display(){
    ofDrawSphere(location.x,location.y,0,20.0);

}
