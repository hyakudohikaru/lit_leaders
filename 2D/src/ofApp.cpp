#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);//背景を黒くしてみよう
    ofSetCircleResolution(60);//円の滑らかさ
    ofSetColor(25, 135, 233);//青系の色
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //p18 大きさ形は同じで透明度をあげる
    //透明度→値が大きいほど濃い
    ofSetColor(25, 135, 233,100);//lineの色
    ofDrawLine(100, 100, 800, 600);//(100,100)から(800,600)の線をかく
    ofSetColor(30,135,50,150);//四角形の色
    ofDrawRectangle(200, 300, 300, 300);//左上(200,300)一辺300の四角形
    ofSetColor(240, 200, 50,125);//円の色
    ofDrawCircle(700, 200, 100);//中心(700,200)に半径100の円
    ofSetColor(210, 25, 20,120);//三角形の色
    ofDrawTriangle(600, 600, 700, 400, 900, 700);//(600,600)(700,400)(900,700)が頂点の三角形
    
    //自由に書いてみよう
    ofSetColor(255, 255, 0,50);
    ofDrawTriangle(20, 40, 100, 90, 70,100);
    
    ofSetColor(255, 0, 255, 80);
    ofDrawRectangle(800, 680, 50, 50);
    
    ofSetColor(0, 255, 255, 170);
    ofDrawCircle(150, 600, 60);
    
    ofSetColor(125, 0, 255, 100);
    ofDrawLine(1000, 50, 800, 700);
    ofSetLineWidth(5);//線の太さ

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
