#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255, 255, 255);
    
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofEnableAlphaBlending();
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    
    ofSetColor(0, 0, 0);
    ofDrawLine(0, 0, -100, 86.6, 0, -50);
    ofDrawLine(86.6, 0, -50, 86.6, 0, 50);
    ofDrawLine(86.6, 0, 50, 0, 0, 100);
    ofDrawLine(0, 0, 100, -86.6, 0, 50);
    ofDrawLine(-86.6, 0, 50, -86.6, 0, -50);
    ofDrawLine(-86.6, 0, -50, 0, 0, -100);
    
    ofDrawLine(0, 0, -90, 78, 0, -45);
    ofDrawLine(78, 0, 45, 0, 0, 90);
    ofDrawLine(-78, 0, 45, -78, 0, -45);

    cam.end();
    
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
