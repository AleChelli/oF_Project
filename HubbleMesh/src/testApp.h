#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		ofImage image;
		ofMesh mesh;
		ofEasyCam easyCam;
		vector<ofVec3f> offsets;

		//Orbiting on and off
		ofMesh meshCopy;
		bool orbiting;
		float startOrbitTime;

		//For store every vertex;
		vector<float> distances;
		vector<float> angles;
		ofVec3f meshCentroid;

		bool mouseDisplacement;



};
