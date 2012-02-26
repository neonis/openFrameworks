#pragma once

#include "ofMain.h"


class testApp : public ofBaseApp {
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    void addPoint(float x, float y, float z) {
    
        ofVec3f p(x, y, z);
        points.push_back(p);
        
        // we are passing the size in as a normal x position
        float size = ofRandom(5, 50);
        sizes.push_back(size);
    }
    
    // vector to store all values
    vector <ofVec3f> points;
    vector <ofVec3f> sizes;
    
    ofVbo            vbo;
    ofShader         shader;
    ofEasyCam        camera;
    
    float            camDist;
    
    ofTexture        texture;
};