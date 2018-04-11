#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //windowの設定
    ofBackground(0,0,0);
    ofSetWindowShape(640,480);
    ofSetFrameRate(30);
    
    //ofxOpenNIの初期設定
    kinect.setup();
    kinect.setRegister(true);//深度情報
    kinect.setMirror(true);//左右を反転
    kinect.addDepthGenerator();//距離情報の取得がキネクトに組み込まれる
    
    kinect.start();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    kinect.update();//この度に距離画像取得

}

//--------------------------------------------------------------
void ofApp::draw(){
    kinect.drawDepth(0,0,640,480);//深度画像

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
