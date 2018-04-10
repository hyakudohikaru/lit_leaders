#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255, 180, 255, 50);
    
    ofSetCircleResolution(60);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int x = ofGetWidth()/2;
    int y = ofGetHeight()/2;
    int star[5];
    
    ofFill();
    
    ofSetColor(255, 0, 255);
    ofDrawEllipse(x, y, 840, 420);
    
    ofSetColor(0, 200,180);
    ofDrawCircle(x, y, 210);

    
    ofDrawCircle(x, y, 210);
    
    ofDrawEllipse(x-105, y, 210, 100);
    ofDrawEllipse(x-315, y, 210, 100);
    ofDrawEllipse(x+105, y, 210, 100);
    ofDrawEllipse(x+315, y, 210, 100);

    ofFill();
    ofSetColor(255, 100, 0);
    ofDrawEllipse(x-105, y, 218, 98);
    ofDrawEllipse(x-315, y, 218, 98);
    ofDrawEllipse(x+105, y, 218, 98);
    ofDrawEllipse(x+315, y, 218, 98);
    //青
    ofSetColor(0, 0, 255);
    ofDrawCircle(x-420, y, 70);
    
    //赤
    ofSetColor(255, 0, 0);
    ofDrawCircle(x-210, y, 70);
    
    //緑
    ofSetColor(0, 255, 0);
    ofDrawCircle(x, y, 70);
    
    //黄色
    ofSetColor(255, 255, 0);
    ofDrawCircle(x+210, y, 70);
    
    //紫
    ofSetColor(125, 0, 255);
    ofDrawCircle(x+420, y, 70);
    
   
    
    
    
    
    
    
    

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
