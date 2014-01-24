#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    for(int i=0;i<100;i++){
        m[i].initialize(ofRandom(0.1,5),0,0);
    }
    wind.set(0.01,0);
    gravity.set(0,0.1);

}

//--------------------------------------------------------------
void testApp::update(){
    for(int i=0;i<100;i++){
        m[i].applyForce(wind);
        m[i].applyForce(gravity);
        m[i].update();
        m[i].checkEdges();

    }

}

//--------------------------------------------------------------
void testApp::draw(){
    for(int i = 0 ; i<100; i++){
        m[i].display();
    }

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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
