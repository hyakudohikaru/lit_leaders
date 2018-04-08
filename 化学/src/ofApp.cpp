#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofEnableAlphaBlending();

    ofTrueTypeFont::setGlobalDpi(72);
    
    verdana.load("verdana.ttf", 30);
    verdana.setLineHeight(24);
    verdana.setLetterSpacing(1.0);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    cam.begin();
    
   /* ofSetColor(255, 255, 255);
    ofDrawLine(0, 0, 0, 0, 0, -100);
    ofDrawLine(0, 0, 0, 95, 0, -31);
    ofDrawLine(0, 0, 0, 59, 0, 81);
    ofDrawLine(0, 0, 0, -59, 0, 81);
    ofDrawLine(0, 0, 0, -95, 0, -31);*/
    
    ofSetColor(25, 235, 255);
    ofDrawLine(0, 0, -100, 95, 0, -31);
    ofDrawLine(95, 0, -31, 59, 0, 81);
    ofDrawLine(59, 0, 81, -59, 0, 81);
    ofDrawLine(-59, 0, 81, -95, 0, -31);
    ofDrawLine(-95, 0, -31, 0, 0, -100);
    
    ofSetColor(255, 135, 135);
    //ofDrawLine(0, 50, -100, 0, -50, -100);
    ofDrawLine(95, 50, -31, 95, -50, -31);
    ofDrawLine(59, 50, 81, 59, -50, 81);
    ofDrawLine(-59, 50, 81, -59, -50, 81);
    ofDrawLine(-95, 50, -31, -95, -50, -31);
    
    
    ofPushMatrix();
    ofSetColor(25, 255, 135);
    ofTranslate(ofPoint(0, 0, -100));
    verdana.drawString("O", -10, -10);
    ofPopMatrix();
    
    ofPushMatrix();
    ofSetColor(25, 255, 135);
    ofTranslate(ofPoint(95, 0, -31));
    verdana.drawString("OH", -10, 55);
    verdana.drawString("CH2OH", -10, -73);
    ofPopMatrix();
    
    ofPushMatrix();
    ofSetColor(25, 255, 135);
    ofTranslate(ofPoint(59, 0, 81));
    verdana.drawString("OH", -10, 55);
    verdana.drawString("H", -10, -73);
    ofPopMatrix();
    
    ofPushMatrix();
    ofSetColor(25, 255, 135);
    ofTranslate(ofPoint(-59, 0, 81));
    verdana.drawString("H", -10, 55);
    verdana.drawString("OH", -10, -73);
    ofPopMatrix();
    
    ofPushMatrix();
    ofSetColor(25, 255, 135);
    ofTranslate(ofPoint(-95, 0, -31));
    verdana.drawString("CH2OH", -10, 55);
    verdana.drawString("H", -10, -73);
    ofPopMatrix();
    
   
    
    
    
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
