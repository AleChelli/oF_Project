#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    for(int i=0;i<10;i++){
        m[i].initialize(ofRandom(1,5),i*100,0);
    }
    wind.set(0.01,0,0);
    gravity.set(0,0.1,0);
}

//--------------------------------------------------------------
void testApp::update(){
    for(int i=0;i<10;i++){
        M=m[i].mass;
        ofVec3f gravit;
        gravit.set(0,gravity.y*M,0);
        float c = 0.01; //Coefficente di attrito
        ofVec3f friction;
        friction = m[i].velocity;
        friction*=(-1);
        friction.normalize();
        friction*=c;
        m[i].applyForce(friction);
        m[i].applyForce(wind);
        m[i].applyForce(gravit);
        m[i].update();
        m[i].checkEdges();

    }

}

//--------------------------------------------------------------
void testApp::draw(){
    for(int i = 0 ; i<10; i++){
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
