#include "Baloon.h"
#include "Wind.h"
balloon::balloon(){
    location.set(ofGetWindowWidth()/2, ofGetWindowHeight()-100,0);
    velocity.set(0,-0.1,0);
}

void balloon::display(){
    ofSetColor(ofColor::black);
    ofDrawSphere(location.x,location.y,0,20.0);
}

void balloon::update(){
    velocity.set(0,-1,0);
    acceleration.set(0,0,0);
    acceleration=w.update();
    cout << acceleration<<endl;

    velocity+=acceleration;
    cout << velocity << endl;
    location+=velocity;
    cout << location << endl;

}


