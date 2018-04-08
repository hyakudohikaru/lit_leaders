#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0, 0, 0);
    
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

    cam.begin();
    
    ofSetColor(255, 255, 255);
    ofDrawLine(0, 0, -100, 86.6, 0, -50);
    ofDrawLine(86.6, 0, -50, 86.6, 0, 50);
    ofDrawLine(86.6, 0, 50, 0, 0, 100);
    ofDrawLine(0, 0, 100, -86.6, 0, 50);
    ofDrawLine(-86.6, 0, 50, -86.6, 0, -50);
    ofDrawLine(-86.6, 0, -50, 0, 0, -100);
    
    ofSetColor(25, 135, 255);
    ofDrawLine(86.6, 50, -50, 86.6, -50, -50);
    ofDrawLine(86.6, 50, 50, 86.6, -50, 50);
    ofDrawLine(0, 50, 100, 0, -50, 100);
    ofDrawLine(-86.6, 50, 50, -86.6, -50, 50);
    ofDrawLine(-86.6, 50, -50, -86.6, -50, -50);
    
    ofPushMatrix();
    ofSetColor(255, 25, 25);
    ofTranslate(ofPoint(0, 0, -100));
    verdana.drawString("O", -12, -10);
    ofPopMatrix();
    
    ofPushMatrix();
    ofSetColor(255, 25, 25);
    ofTranslate(ofPoint(86.6, 0, -50));
    verdana.drawString("H", -10, 53);
    verdana.drawString("OH", -10, -75);
    ofPopMatrix();
    
    ofPushMatrix();
    ofSetColor(255, 25, 25);
    ofTranslate(ofPoint(86.6, 0, 50));
    verdana.drawString("H", -10, 53);
    verdana.drawString("OH", -10, -75);
    ofPopMatrix();
    
    ofPushMatrix();
    ofSetColor(255, 25, 25);
    ofTranslate(ofPoint(0, 0, 100));
    verdana.drawString("OH", -10, 53);
    verdana.drawString("H", -10, -75);
    ofPopMatrix();
    
    ofPushMatrix();
    ofSetColor(255, 25, 25);
    ofTranslate(-86.6, 0, 50);
    verdana.drawString("H", -10, 53);
    verdana.drawString("OH", -10, -75);
    ofPopMatrix();
    
    ofPushMatrix();
    ofSetColor(255, 25, 25);
    ofTranslate(ofPoint(-86.6, 0, -50));
    verdana.drawString("CH2OH", -10, 53);
    verdana.drawString("H", -10, -75);
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
