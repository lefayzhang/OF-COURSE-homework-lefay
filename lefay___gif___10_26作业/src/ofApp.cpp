#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //ofSetBackgroundAuto(false);
    
    ofSetVerticalSync(true);
    
    ofBackground(74,72,96);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
//--------------------------------------------------------------------orig point
    
    ofSetColor(146,119,158,50);
    ofCircle(mouseX,mouseY,5);
    
//--------------------------------------------------------------------pink point
    
    float colorDifference=50;
    
int circleNumber=ofMap(mouseX,0,ofGetWidth(),0,50);
for (int i=0;i<circleNumber;i++){
    float xorig=mouseX + 10*i;
    float yorig=mouseY +20*i;
    float radius1=ofMap(mouseX,0,ofGetWidth(),0,150);
    float angle1 = ofGetElapsedTimef()*5;
    float x1=xorig+radius1*cos(angle1);
    float y1=yorig+radius1*-sin(angle1);
    
    ofSetColor(246,190,189,(circleNumber-i)*colorDifference);
    ofCircle (x1,y1,i);
//--------------------------------------------------------------------light yellow point

    
    float x2orig=mouseX+20*i;
    float y2orig=mouseY+40*i;
    float radius2=120;
    float angle2= ofGetElapsedTimef()*2;
    float x2=xorig+radius2*cos(angle2*2);
    float y2=yorig+radius2*-sin(angle2*2);
    
    ofSetColor (254,225,211,i*colorDifference);
    ofCircle (x2,y2,30-i);
//--------------------------------------------------------------------line
    
    ofSetColor(243,236,217,i*colorDifference);
    ofLine(x1,y1,x2,y2);

}

}
    


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

