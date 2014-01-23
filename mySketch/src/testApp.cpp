#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    mesh.setMode(OF_PRIMITIVE_LINE_LOOP);
    mesh.enableColors();
    mesh.enableIndices();

    ofVec3f top(100.0, 50.0, 0.0);
    ofVec3f left(50.0, 150.0, 0.0);
    ofVec3f right(150.0, 150.0, 0.0);

    mesh.addVertex(top);
    mesh.addColor(ofFloatColor(1.0,0.0,0.0));
    mesh.addVertex(left);
    mesh.addColor(ofFloatColor(0.0,1.0,0.0));
    mesh.addVertex(right);
    mesh.addColor(ofFloatColor(0.0,0.0,1.0));

    mesh.addIndex(0);
    mesh.addIndex(2);
    mesh.addIndex(1);
    mesh.addIndex(0);
    mesh.addIndex(2);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    mesh.draw();


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
