#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void drawMyShape();
    void drawMyShape(int x,int y);
    void drawMyShape(int x,int y,int width,int height);
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    float circleX;
    float circleY;
    float circleSize;
    float xSpeed;
    float ySpeed;
    
    ofColor Rect1Color;
    ofColor Rect2Color;
    ofColor Rect3Color;
    ofColor Rect4Color;
    ofColor Circle1Color;
    
    int rectWidth;
    int rectHeight;
    int rectCircle;
    
    bool drawGradient;

    
    
};
