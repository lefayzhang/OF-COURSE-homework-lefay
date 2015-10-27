#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(false);
    ofSetCircleResolution(60);
    ofCircle(circleX,circleY,circleSize);
    
    
    circleX = ofGetWidth() /2;
    circleY = ofGetHeight() /2;
    circleSize = 50;
    xSpeed=0;
    ySpeed=0;
    
    
    Rect1Color.set(77,67,63);
    Rect2Color.set(89,105,86);
    Rect3Color.set(65,60,56);
    Rect4Color.set(142,74,69);
    Circle1Color.set(0,0,0);
    
    
    ofColor colorOne;
    ofColor colorTwo;
    
    
    drawGradient = true;
    
}


//--------------------------------------------------------------
void ofApp::update(){
    circleX=circleX+xSpeed;
    circleY=circleY+ySpeed;
    
    
    
    Rect1Color.r=ofMap(mouseX,mouseY,ofGetWidth(),50,100);
    Rect1Color.g=ofMap(mouseX,mouseY,ofGetWidth(),50,50);
    
    Rect2Color.r=ofMap(mouseX,mouseY,ofGetWidth(),50,100);
    Rect2Color.b=ofMap(mouseX,mouseY,ofGetWidth(),50,20);
    Rect2Color.g=ofMap(mouseX,mouseY,ofGetWidth(),50,100);
    
    Rect3Color.r=ofMap(mouseX,mouseY,ofGetWidth(),50,100);
    Rect3Color.g=ofMap(mouseX,mouseY,ofGetWidth(),50,100);
    
    Rect4Color.r=ofMap(mouseX,mouseY,ofGetWidth(),50,100);
    Rect4Color.b=ofMap(mouseX,mouseY,ofGetWidth(),50,50);
    
    Circle1Color.b=ofMap(mouseX,mouseY,ofGetWidth(),50,150);
    Circle1Color.r=ofMap(mouseX,mouseY,ofGetWidth(),50,50);
    Circle1Color.g=ofMap(mouseX,mouseY,ofGetWidth(),50,50);
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    ofColor colorOne;
    ofColor colorTwo;
    
    colorOne.set (221, 172, 87);
    colorTwo.set (90,131, 138);
    
    if (drawGradient) {
        ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_CIRCULAR);
        drawGradient = false;
    }
    
    
    
    //-----------------------------------------------------a moving circle／no fill
    ofSetColor(180,182,214);
    ofCircle(circleX+100,circleY+100,circleSize/2);
    //------------------------------------------------------four square
    ofFill();
    ofSetColor(Rect1Color);
    ofRect(0, 0,rectWidth, rectHeight);
    
    ofSetColor(Rect2Color);
    ofRect(ofGetWidth()-300, 0, 300, rectHeight);
    
    ofSetColor(Rect3Color);
    ofRect(ofGetWidth()-300, ofGetHeight()-200, rectWidth,200);
    
    ofSetColor(Rect4Color);
    ofRect(0, ofGetHeight()-200, 300, rectHeight);
    
    //----------------------------------------------------background  black line
    ofSetColor(40,40,43);
    ofRect(200, 280, 1500, 35);
    
    //-------------------------------------no move circle/2
    ofSetColor(222,195,132,200);
    ofCircle(180,180,60);
    ofSetColor(80,180,200);
    ofCircle(200,200,22);
    
    // -------------------------------------------big center white circle
    ofSetColor(250,240,255,240);
    ofCircle(650,400,rectCircle);
    
    
    //a moving circle
    ofSetColor(100,190,194);
    ofCircle(circleX,circleY,circleSize);
    
    
    //-----------------------------------change color circle/ dark black
    ofSetColor(Circle1Color);
    ofCircle(550,500,80);
    
    
    //--------------------------------------------------bar2
    ofFill();
    ofSetColor(204,105,90,235);
    ofPoint a;
    a.x = 650;
    a.y = mouseY;
    
    ofRect(a, 34, mouseY);
    
    
    //------------------------------------------------bar 1
    ofFill();
    ofSetColor(219,217,186);
    ofPoint q;      // create a point q
    q.x = mouseX;       // set the x of the point
    q.y = 400;       // set the y of the point
    
    ofRect(q, mouseX, 25); // Draw the rectangle
    
    //-------------------------------------------------bar3
    ofFill();
    ofSetColor(90,95,100);
    ofPoint p;
    p.x = mouseX;
    p.y = 425;
    ofRect(p, mouseX, 40);
    
    //-------------------------------------------------draw my shape 2 square
    ofSetColor(0,10,0,20);
    ofFill();
    drawMyShape(mouseX,mouseY,80,80);//square 1
    
    ofSetLineWidth(2);
    ofSetColor(222,195,90);
    ofNoFill();
    drawMyShape(mouseX,mouseY,50,50);//square 2
    
    
    
    
}

//--------------------------------------------------------------

void ofApp::drawMyShape(int x,int y,int width,int height){
    ofBeginShape();
    ofVertex(x,y);
    ofVertex(x+width,y);
    ofVertex(x+width, y+height);
    ofVertex(x, y+height);
    ofVertex(x, y);
    ofEndShape();
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    cout<<"keypressed"<<char(key)<<endl;
    
    if(key=='1'){
        rectWidth=rectWidth +20;
    }
    if(key=='2'){
        rectWidth=rectWidth -20;
    }
    if(key=='3'){
        rectHeight=rectHeight +20;
    }
    if(key=='4'){
        rectHeight=rectHeight -10;
    }
    if(key=='5'){
        rectCircle=rectCircle -10;
    }
    if(key=='6'){
        rectCircle=rectCircle +10;
    }
    
    if (key == 'g') {
        drawGradient = true;
    }
}


//--------------------------------------------------------------

void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    if(x>ofGetWidth()/2 ){
        xSpeed=3;
    }
    else{
        xSpeed=-3;
    }
    if(y>ofGetHeight()/2 ){
        ySpeed=3;
    }
    else{
        ySpeed=-3;
    }
    
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    circleX=x;
    circleY=y;
    
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    circleX=x;
    circleY=y;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
