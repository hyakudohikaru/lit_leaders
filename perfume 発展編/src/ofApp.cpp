#include "ofApp.h"
int color_mode = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int x = 20;
    for (int i = 0; i<ofGetWidth()/20; i++) {
        if (ofSetColor(ofColor::fromHsb(255*pow(sin((float)ofGetElapsedTimeMillis()/1000+((float)i*PI/600)),2),255,255));
       /* }else if (color_mode == 1){
            ofSetColor(0, 255, 255);
        }else{
            ofSetColor(255, 255, 0);
        }*/
        ofDrawLine(x, 0, x, ofGetHeight());
        x = x + 20;
    }
   
    //x = x + 20;
   // ofDrawLine(x, 0, x, ofGetHeight());

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key =='c') {
        color_mode = (color_mode +1)%3;
    }

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
