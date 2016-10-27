//
//  PlanetClass.hpp
//  solarSystem
//
//  Created by Jesús Eloi on 27/9/16.
//
//

#ifndef PlanetClass_hpp
#define PlanetClass_hpp

#include "ofMain.h"




class PlanetClass{

public:
    void setup();
    void update();
    void draw();

    ofParameterGroup planetGroup;
    ofParameter<float> rotateSpeed;
    ofParameter<float> posX;
    ofParameter<float> posY;
    ofParameter<int>  red;
    ofParameter<int> green;
    ofParameter<int> blue;
    
    
    float rotation = 0.0;
    
    
    
};

#endif /* PlanetClass_hpp */
