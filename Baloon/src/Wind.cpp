#include "Wind.h"

wind::wind(){
    tx=1000;
    ty=10000;
    windv.set(0,0,0);
}

ofVec3f wind::update(){
    float x = ofMap(ofNoise(tx),0,1,-5,5);
    float y = ofMap(ofNoise(ty),0,1,-5,5);

    tx+=0.1;
    ty+=0.1;

    windv.set(x,y,0);

    return windv;

}
