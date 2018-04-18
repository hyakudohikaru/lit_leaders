#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    
    //変数の初期化
    variable();
}

//--------------------------------------------------------------
void ofApp::variable(){
    Center = ofVec2f(ofGetWidth()/2,ofGetHeight()/2);
    //襖
    doorLength = 200;
    doorSide = 100;
    doorPoint = ofVec2f(0,0);
    doorSpeed = 10.0;
    doorAccele = 5.0;
    //雲
    curvePoint = ofVec2f(0,0);
    curve_radius[0] = 100;
    curve_radius[1] = 50;
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    //door();
    cloud();
    cam.end();
}

//襖--------------------------------------------------------------
/*void ofApp::door(){//あえて線で描いているのは少しずつ生み出そうと思っている(B)
    //右
    ofPushMatrix();
    doorSpeed=doorSpeed+doorAccele;
    doorPoint.x = doorPoint.x + doorSpeed;
    ofDrawLine(doorPoint.x,doorPoint.y, doorPoint.x+doorSide,doorPoint.y);
    ofDrawLine(doorPoint.x+doorSide,doorPoint.y, doorPoint.x+doorSide,doorPoint.y-doorLength);
    ofDrawLine(doorPoint.x+doorSide,doorPoint.y-doorLength, doorPoint.x,doorPoint.y-doorLength);
    ofDrawLine(doorPoint.x,doorPoint.y-doorLength, doorPoint.x,doorPoint.y);
    ofDrawCircle(doorPoint.x+20, doorPoint.y-(doorLength/2), 10);
    ofPopMatrix();
    //左
    ofPushMatrix();
    doorSpeed=doorSpeed+doorAccele;
    doorPoint.x= doorPoint.x-doorSpeed;
    ofDrawLine(doorPoint.x,doorPoint.y, doorPoint.x-doorSide,doorPoint.y);
    ofDrawLine(doorPoint.x-doorSide,doorPoint.y, doorPoint.x-doorSide,doorPoint.y-doorLength);
    ofDrawLine(doorPoint.x-doorSide,doorPoint.y-doorLength, doorPoint.x,doorPoint.y-doorLength);
    ofDrawLine(doorPoint.x,doorPoint.y-doorLength, doorPoint.x,doorPoint.y);
    ofDrawCircle(doorPoint.x-20, doorPoint.y-(doorLength/2), 10);
    ofPopMatrix();
    
}
*/
//雲--------------------------------------------------------------
void ofApp::cloud(){
    
    
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
