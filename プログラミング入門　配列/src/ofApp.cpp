#include "ofApp.h"

int color_mode = 0;
int numline;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    numline = ofGetWidth()/30;

}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < numline; i++) {
        lineColor[i] = 8*i;//増やすと途中ぐらいで終わる　減らすと色が減る
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 255, 255);
    ofSetColor(0, 0, 0);
    int x = 30;
    for (int i = 0; i < numline; i++) {
        if (color_mode == 0) {
            ofSetColor(ofColor::fromHsb(lineColor[i], 255, 255));
        }
        ofDrawLine(x, 0, x, ofGetHeight());
        x = x + 30;
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
