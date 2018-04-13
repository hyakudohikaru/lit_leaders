#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    
    ofSetCircleResolution(60);
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    for (int i =0; i < ofGetWidth(); i=i +(ofGetWidth()/30)) {
        ofSetColor(0, 0, 0,100);
        ofDrawLine(i, 0, i, ofGetHeight());
    }
    
    for (int i =0; i < ofGetHeight(); i=i+(ofGetWidth()/30)) {
        ofSetColor(0, 0, 0,100);
        ofDrawLine(0, i, ofGetWidth(), i);
    }
    
    ofPushStyle();
    ofSetLineWidth(4);
    ofSetColor(100, 100, 100);
    ofDrawLine(0, mouseY, ofGetWidth(), mouseY);
    ofDrawLine(mouseX, 0, mouseX, ofGetHeight());
    ofPopStyle();
  
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    double dis = std::sqrt((mouseX-(ofGetWidth()/2))*(mouseX-(ofGetWidth()/2))+(mouseY-(ofGetHeight()/2))*(mouseY-(ofGetHeight()/2)));
    
    double radian = std::atan2(mouseY-(ofGetHeight()/2),mouseX-(ofGetWidth()/2));
    double deg =radian * 180.0/PI;
    
    
    if (deg>0) {
        cout << deg << endl;
        ofSetColor(ofColor::fromHsb(255.0/360.0*(360-deg), 255, 255));
    }else if (deg <0){
        double degr = deg + 360;
        cout << degr << endl;
        ofSetColor(ofColor::fromHsb(255.0/360.0*(360-degr), 255, 255));
    }
    
    
    
    ofNoFill();
    ofDrawCircle(0, 0, dis);
    
    ofFill();
    ofDrawCircle(0, 0, dis/4);
    
    
    ofPopMatrix();
    
    
    ofDrawLine(ofGetWidth()/2, ofGetHeight()/2, mouseX, mouseY);
    
    

    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    //ofSetColor(ofColor::fromHsb(, 255, 255));

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
