#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    ofSetColor(0, 0, 0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofDrawCircle(circle_x, circle_y, 50);
    //ofDrawCircle(mouseX, mouseY, 50);
    
   // ofDrawCircle(x_circle, y_circle, 50);
    
    ofDrawCircle(ofGetWidth()/2, ofGetWidth()/2, size_circle);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'a') {
        size_circle = size_circle + 20;
    }
    if (key == 's'){
        size_circle = size_circle - 20;
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 'q') {
        size_circle = size_circle + 20;
    }
    if (key == 'w'){
        size_circle = size_circle - 20;
    }

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
  //  circle_x =x;
  //  circle_y =y;
    
    //ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
   /* if (button == 0) {
        ofSetColor(255, 0, 0);
    }else if (button == 1){
        ofSetColor(0, 255, 0);
    }else if (button == 2){
        ofSetColor(0, 0, 255);
    }
    x_circle = x;
    y_circle = y;
*/
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    x_circle = x;
    y_circle = y;

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    x_circle =ofGetWidth()/2;
    y_circle =ofGetHeight()/2;

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
