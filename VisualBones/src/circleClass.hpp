//
//  circleClass.hpp
//  visuals1
//
//  Created by Jesús Eloi on 24/9/16.
//
//

#ifndef circleClass_hpp
#define circleClass_hpp

#include "ofMain.h"



class circleClass{
    
public:
    void setup();
    void update();
    void draw();
    
    ofParameterGroup circleParams;
    ofParameter<int> circleRes;
    ofParameter<float> release;
    ofParameter<float> size;
    
    ofParameter<int> posX;
    ofParameter<int> posY;
    ofParameter<float> rotateX;
    ofParameter<float> rotateY;
    ofParameter<float> rotateZ;
    
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    ofParameter<int> alpha;
    
    float rotationX = 0.0;
    float rotationY = 0.0;
    float rotationZ = 0.0;
    
    float * fftSmooth;
    int bands;


};

#endif /* circleClass_hpp */
