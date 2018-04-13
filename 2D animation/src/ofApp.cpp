#include "ofApp.h"

    float move_x, move_y;//円のx、y座標
    float speed_x, speed_y;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    
    ofSetFrameRate(60);//1秒あたりの枚数
    ofSetCircleResolution(90);
    
    move_x = 300;
    move_y = 200;//0に初期化
    
    speed_x = 10;
    speed_y = 10;
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    move_x = move_x + speed_x;
    move_y = move_y + speed_y;//一枚ずつ増やす
    
  /*  if (move_y > ofGetHeight()) {
        move_y = 0;
    }//下に触れたら上に
    if (move_y < 0) {
        move_y = ofGetHeight();
    }//上に触れたら下に
    if (move_x > ofGetWidth()) {
        move_x = 0;
    }//右に触れたら左
    if (move_x < 0) {
        move_x = ofGetWidth();
    }//左に触れたら右*/
    
    //跳ね返り
    if (move_x + 150 > ofGetWidth()) {
        speed_x = speed_x * -1;//speed_x *= -1と同じ
        ofSetColor(255, 0, 0);
    }
    if (move_x - 150 < 0) {
        speed_x = speed_x * -1;
        ofSetColor(0, 255, 0);
    }
    if (move_y > ofGetHeight() - 150) {
        speed_y = speed_y * -1;
        ofSetColor(255, 0, 255);
    }
    if (move_y < 150 ) {
        speed_y = speed_y *-1;
        ofSetColor(0, 255, 255);
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0, 0, 255);
    ofDrawCircle(move_x, move_y, 150);
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
