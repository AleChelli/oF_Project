
#include "RandomWalker.h"
RandomWalker::RandomWalker(){
    x= ofGetWindowWidth()/2;
    y=ofGetWindowHeight()/2;
    z=1;
}

void RandomWalker::display(){
    ofSetColor(ofColor::black);
}

void RandomWalker::step(){
        int choice = ofRandom(26);
        if (choice == 0){
            x+=1;
        } else if (choice== 1){
            x-=1;
        } else if (choice == 2) {
            y+=1;
        } else if (choice == 3) {
            y-=1;
        } else if (choice == 4) {
            z+=1;
        } else if (choice == 5) {
            z -=1;
            //cout << z << endl;
        } else if (choice == 6) {
            x+=1;
            y+=1;
        } else if (choice == 7) {
            x-=1;
            y+=1;
        } else if (choice == 8) {
            x+=1;
            y-=1;
        } else if (choice == 9) {
            x-=1;
            y-=1;
        } else if (choice == 10) {
            x+=1;
            z+=1;
            //cout << z << endl;
        } else if (choice == 11) {
            x-=1;
            z+=1;
            //cout << z << endl;
        } else if (choice == 12) {
            x+=1;
            z-=1;
            //cout << z << endl;
        } else if (choice == 13) {
            x-=1;
            z-=1;
            //cout << z << endl;
        } else if (choice == 14) {
            y+=1;
            z+=1;
            //cout << z << endl;
        } else if (choice == 15) {
            y-=1;
            z+=1;
            //cout << z << endl;
        } else if (choice == 16) {
            y+=1;
            z-=1;
            //cout << z << endl;
        } else if (choice == 17) {
            y-=1;
            z-=1;
            //cout << z << endl;
        } else if (choice == 18) {
            x+=1;
            y+=1;
            z+=1;
            //cout << z << endl;
        } else if (choice == 19) {
            x-=1;
            y+=1;
            z+=1;
            //cout << z << endl;
        } else if (choice == 20) {
            x+=1;
            y-=1;
            z+=1;
            //cout << z << endl;
        } else if (choice == 21) {
            x+=1;
            y+=1;
            z-=1;
        } else if (choice == 22) {
            x-=1;
            y-=1;
            z+=1;
        } else if (choice == 23) {
            x-=1;
            y+=1;
            z-=1;
            cout << z << endl;
        } else if (choice == 24) {
            x+=1;
            y-=1;
            z-=1;
        } else {
            x-=1;
            y-=1;
            z-=1;
        }
}

int RandomWalker::returnX(){
    return x;
}

int RandomWalker::returnY(){
    return y;
}

int RandomWalker::returnZ(){
    return z;
}
