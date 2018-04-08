#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    /*ofSetCircleResolution(60);
    ofBackground(255, 255, 255);*/
    

}

//--------------------------------------------------------------
void ofApp::update(){
   /* x = x + xx;
    y = y + yy;
    if(x< 100 ||ofGetWidth()-100<x) xx *= -1;
    if(y <100 ||ofGetHeight()-100<y) yy *= -1;*/
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 255, 255);
    cam.begin();
  
    
    ofSetColor(0, 0, 0, 150);
    ofDrawBox(0, 0, 0, 100);
    

    ofDrawIcoSphere(300, 300, 300, 50);
    
    cam.end();
    
    
    
    
    
    
    //ofBackground(255, 255, 255);
    
    //ofSetColor(255, 255, 255, 255);
    //ofDrawCircle(300, 550, 100);
   //ofdraw(200, 450, 200);
    
    
   // ofDrawTriangle(200, 450, 600, 250, 400, 650);
    
    //ofDrawEllipse(300, 550, 400, 200);
    
    //ofDrawLine(300, 550, 1024, 0);
    
   // int x = ofGetWidth()/8;
    //int y = ofGetHeight()/6;
    
    //ofSetColor(255, 0, 0);
    //ofSetLineWidth(1);
    /*for (int i = 0; i<8; i++) {
        ofDrawLine(i*x, 0, i* x, 768);
    }
    for (int i = 0; i<6; i++) {
        ofDrawLine(0, i*y, 1024, i*y);
    }*/
    
    /*ofSetColor(255,255,0);
    ofDrawEllipse(128, 384, 230, 720);*/
    //ofSetColor(0,0,255);
    //ofDrawCircle(384, 128, 100);
    /*ofSetColor(255, 0, 255);
    ofDrawTriangle(284, 530, 284, 720, 474, 720);
    ofSetColor(0, 255, 50);
    ofDrawRectangle(512, 256, 256, 256);*/
    
  //  ofSetColor(0, 0, 255);
   // ofDrawCircle(x, y, 100);
    
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
   //swich文
   /* switch(key) {
        case 'a':
            xx *= 2;
            yy *= 2;
            break;
        case 'b':
            xx *= 0.5;
            yy *= 0.5;
            break;
        default:   //それ以外
            break;
            
    
    }
    */
    

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
    
   /* r = (r + 10) % 256;
    g = (g + 30) % 256;
    b = (b + 50) % 256;
    ofBackground(r, g, b);
    
    xx = -xx;
    yy = -yy;*/
    
   
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
