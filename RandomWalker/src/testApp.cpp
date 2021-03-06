#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    mesh.setMode(OF_PRIMITIVE_LINE_STRIP);
    mesh.enableColors();
    ofBackground(0);

}

//--------------------------------------------------------------
void testApp::update(){
    ofSetFrameRate(300);
    w.step();
    x=w.returnX();
    y=w.returnY();
    ofVec3f pos(x,y,0);
    mesh.addVertex(pos);
    mesh.addColor(ofColor(ofRandom(255), ofRandom(255), ofRandom(255)));



}

//--------------------------------------------------------------
void testApp::draw(){
    easyCam.begin();
        ofPushMatrix();
            ofTranslate(-ofGetWidth()/2,-ofGetHeight()/2);
            mesh.draw();
        ofPopMatrix();
    easyCam.end();

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
