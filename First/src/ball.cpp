#include "ball.h"
Ball::Ball() {
    //Set the initial color
    color.set(ofRandom(255), ofRandom(255), ofRandom(255));

    //initial x position of the ball
    x = ofRandom(ofGetWindowWidth());

    //initial position of the ball
    y = ofRandom(ofGetWindowHeight());


}

void Ball::moveTo(int _xDestiny, int _yDestiny){
    x +=(_xDestiny-x)*0.1;
    y +=(_yDestiny-y)*0.1;
}

void Ball::changeColor(){
    color.set(ofRandom(255),ofRandom(255),ofRandom(255));
}

void Ball::draw(){
    ofSetColor(color);
    ofFill();
    ofCircle(x,y,30);

}
