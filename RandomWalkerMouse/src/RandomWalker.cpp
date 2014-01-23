
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
            x+=5;
        } else if (choice== 1){
            x-=5;
        } else if (choice == 2) {
            y+=5;
        } else if (choice == 3) {
            y-=5;
        } else if (choice == 4) {
            z+=5;
            cout << z << endl;
        } else if (choice == 5) {
            z -=5;
            cout << z << endl;
        } else if (choice == 6) {
            x+=5;
            y+=5;
        } else if (choice == 7) {
            x-=5;
            y+=5;
        } else if (choice == 8) {
            x+=5;
            y-=5;
        } else if (choice == 9) {
            x-=5;
            y-=5;
        } else if (choice == 10) {
            x+=5;
            z+=5;
            cout << z << endl;
        } else if (choice == 11) {
            x-=5;
            z+=5;
            cout << z << endl;
        } else if (choice == 12) {
            x+=5;
            z-=5;
            cout << z << endl;
        } else if (choice == 13) {
            x-=5;
            z-=5;
            cout << z << endl;
        } else if (choice == 14) {
            y+=5;
            z+=5;
            cout << z << endl;
        } else if (choice == 15) {
            y-=5;
            z+=5;
            cout << z << endl;
        } else if (choice == 16) {
            y+=5;
            z-=5;
            cout << z << endl;
        } else if (choice == 17) {
            y-=5;
            z-=5;
            cout << z << endl;
        } else if (choice == 18) {
            x+=5;
            y+=5;
            z+=5;
            cout << z << endl;
        } else if (choice == 19) {
            x-=5;
            y+=5;
            z+=5;
            cout << z << endl;
        } else if (choice == 20) {
            x+=5;
            y-=5;
            z+=5;
            cout << z << endl;
        } else if (choice == 21) {
            x+=5;
            y+=5;
            z-=5;
            cout << z << endl;
        } else if (choice == 22) {
            x-=5;
            y-=5;
            z+=5;
            cout << z << endl;
        } else if (choice == 23) {
            x-=5;
            y+=5;
            z-=5;
            cout << z << endl;
        } else if (choice == 24) {
            x+=5;
            y-=5;
            z-=5;
            cout << z << endl;
        } else {
            x-=5;
            y-=5;
            z-=5;
            cout << z << endl;
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
