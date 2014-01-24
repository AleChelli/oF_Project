#include "Mover.h"

Mover::Mover(){
    mass=0;
    location.set(30,30,0);
    velocity.set(0,0,0);
    acceleration.set(0,0,0);
}

void Mover::initialize(float m, float x, float y){
    mass = m;
    location.set(x, y,0);
    velocity.set(0,0,0);
    acceleration.set(0,0,0);
    c.set(ofMap(ofRandom(mass),0,mass,0,255),ofMap(ofRandom(mass),0,mass,0,255),ofMap(ofRandom(mass),0,mass,0,255));
}

void Mover::checkEdges(){
    if (location.x>ofGetWindowWidth()){
        location.x = ofGetWindowWidth();
        velocity.x *= -1; //Non è nient'altro che aver invertito la velocità
    } else if (location.x<0) {
        location.x=0;
        velocity.x*=-1;
    }
    if (location.y>ofGetWindowHeight()){
        location.y=ofGetWindowHeight();
        velocity.y*=-1;
    } else if (location.y<0){
        location.y=0;
        velocity.y*=1;
    }

}

void Mover::applyForce(ofVec3f force) {
    ofVec3f f = force/mass;
    acceleration +=f;
}

void Mover::update(){
    velocity+=acceleration;
    location+=velocity;
    acceleration = acceleration*0;

}

void Mover::display(){
    ofSetColor(c.x,c.y,c.z);
    ofDrawSphere(location.x,location.y,0,ofMap(mass,0.1,5,1,20));

}

float Mover::getM(){
    return mass;
}
