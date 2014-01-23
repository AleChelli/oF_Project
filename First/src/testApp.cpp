#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    //Smooth edges
    ofEnableSmoothing();

    //fixed framerate
    ofSetFrameRate(30);
}

//--------------------------------------------------------------
void testApp::update(){
    theBall.moveTo(mouseX,mouseY);
    theBall.changeColor();



}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackgroundGradient(ofColor::gray,ofColor(30,10,30), OF_GRADIENT_CIRCULAR);
    theBall.draw();

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}
