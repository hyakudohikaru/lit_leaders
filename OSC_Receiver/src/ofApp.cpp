#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    receiver.setup(PORT);
    
    remotemouse.x = 0;
    remotemouse.y = 0;
    
    mouseButtonStage = "";

}

//--------------------------------------------------------------
void ofApp::update(){
    while (receiver.hasWaitingMessages()) {
        ofxOscMessage m;//メッセージ取得
        receiver.getNextMessage(&m);//mのアドレスが引数
        
        if (m.getAddress() == "/mouse/position") {
            remotemouse.x = m.getArgAsInt32(0);//ofpoint(引数の0番目の32bitのintを取得)
            remotemouse.y = m.getArgAsInt32(1);//ofpoint(引数の1番目の32bitのintを取得)
        }else if (m.getAddress() == "/mouse/button"){
            mouseButtonStage = m.getArgAsString(0);
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    //ofSetColor(0);
    //ofDrawCircle(remotemouse.x, remotemouse.y, 30);
    if (mouseButtonStage == "down") {
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
    }else{
        ofSetColor(0);
    }
    ofDrawCircle(remotemouse.x, remotemouse.y, 30);

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
