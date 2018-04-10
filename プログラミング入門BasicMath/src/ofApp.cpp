#include "ofApp.h"

int color_mode = 0;

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 255, 255);
    
    ofSetColor(0, 0, 0);
    int x = 30;
    for (int i = 0; i < ofGetWidth()/30; i++) {
        if (color_mode == 0) {
            ofSetColor(ofColor::fromHsb(ofGetElapsedTimeMillis()%255, 255,255));
        }//時間経過に合わせて色が変化
       /*     ofSetColor(255, 0, 0);
        }else if (color_mode == 1){
            ofSetColor(0, 255, 0);
        }else{
            ofSetColor(0, 0, 255);
        }*/
        ofDrawLine(x, 0, x, ofGetHeight());
        x = x + 30;
    }
   // ofDrawLine(x, 0, x, ofGetHeight());//xyz座標(x,0,0,x,ofGetHeight,0)
    
    /*x = x + 30;
    ofDrawLine(x, 0, x, ofGetHeight());*/
    
    
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key=='c') {
        color_mode = (color_mode+1)%3;
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
