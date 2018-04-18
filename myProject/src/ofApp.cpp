#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    ofSetCircleResolution(60);
    
    //変数の初期
    variable();
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    Circle();
    
    //落とす作業
    speed = speed + accele;
    circleCenter.y = circleCenter.y +speed;

}

//--------------------------------------------------------------
void ofApp::variable(){
    radian =100;
    Center = ofVec2f(ofGetWidth()/2,ofGetHeight()/2);
    circleCenter = ofVec2f(Center.x,100);
    speed = 0.5;
    accele = 0.5;
}

//円------------------------------------------------------------
void ofApp::Circle(){
    for (int i = 0; i<12; i++) {
        ofSetColor(255);
        ofDrawCircle(circleCenter.x-(radian*sin(PI/6*i)),circleCenter.y-(radian*cos(PI/6*i)), 2);
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
