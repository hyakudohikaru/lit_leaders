#include "ofApp.h"




//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetFrameRate(60);
    ofSetCircleResolution(60);
    ofSetVerticalSync(true);
    
    
    frabk.load("frabk.ttf", 10);
    frabk.setLineHeight(24);
    frabk.setLetterSpacing(1.0);
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //後ろの線
    for (int i =0; i < ofGetWidth(); i=i +(ofGetWidth()/30)) {
        ofSetColor(0, 0, 0,100);
        ofDrawLine(i, 0, i, ofGetHeight());
    }
    
    for (int i =0; i < ofGetHeight(); i=i+(ofGetWidth()/30)) {
        ofSetColor(0, 0, 0,100);
        ofDrawLine(0, i, ofGetWidth(), i);
    }
    
    //マウスの線
    ofPushStyle();
    ofSetLineWidth(3);
    ofSetColor(100, 100, 100);
    ofDrawLine(0, mouseY, ofGetWidth(), mouseY);
    ofDrawLine(mouseX, 0, mouseX, ofGetHeight());
    ofPopStyle();
  
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    double dis = std::sqrt((mouseX-(centerX))*(mouseX-(centerX))+(mouseY-(centerY))*(mouseY-(centerY)));
    
    double radian = std::atan2(mouseY-(centerY),mouseX-(centerX));
    double deg =radian * 180.0/PI;
    
    
    //円の色
    if (deg>0) {
        cout << deg << endl;
        ofSetColor(ofColor::fromHsb(255.0/360.0*(360-deg), 255, 255));
    }else if (deg <=0){
        deg = deg +360;
        cout << deg << endl;
        ofSetColor(ofColor::fromHsb(255.0/360.0*(360-deg), 255, 255));
    }
   
    //外の円
    ofNoFill();
    ofDrawCircle(0, 0, dis);
    
    //中の円
    ofFill();
    ofDrawCircle(0, 0, dis/4);
    
    
    ofPopMatrix();
    
    //マウスの位置の中心からの線
    ofDrawLine(ofGetWidth()/2, ofGetHeight()/2, mouseX, mouseY);

    //シフト押した時の動き
    switch (font) {
        case 1:
            ofSetColor(100, 100, 100);
            frabk.drawString("radius:"+ofToString(dis), mouseX+5, mouseY+15);
            frabk.drawString("angle:"+ofToString(360.0-deg), mouseX+5, mouseY+30);
            ofSetColor(100, 100, 100, 150);
            for (int i = deg; i<360; i++) {
                ofDrawTriangle(centerX, centerY, centerX+(dis*cos(i*PI/180)), centerY+(dis*sin(i*PI/180)), centerX+(dis*cos((i+1)*PI/180)), centerY+(dis*sin((i+1)*PI/180)));
            }
            if (ofGetElapsedTimeMillis()/10%2 ==0) {
                //dis = dis +5;
                mouseX = mouseX +2;
                mouseY = mouseY+2;
            }else if (ofGetElapsedTimeMillis()/10%2 ==1){
                //dis = dis -5;
                mouseX = mouseX -2;
                mouseY = mouseY -2;
            }
            break;
        default:
            break;
    }
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key ==' ') {
        font = (font+1)%2;
        time = ofGetElapsedTimeMillis()/10%2;
        
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
