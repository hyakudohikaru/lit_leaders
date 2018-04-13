#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofToggleFullscreen();
    ofSetVerticalSync(true);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    ofSetCircleResolution(60);
    ofBackground(0, 0, 0);
    
    mySound.load("Perfume_globalsite_sound.wav");
    mySound.setLoop(true);
    mySound.play();
    
    //FFT解析初期化
    fftSmoothed = new float[8192];
    for (int i = 0; i < 8192; i++) {
        fftSmoothed[i] = 0;
    }
    nBandsToGet = 40;

}

//--------------------------------------------------------------
void ofApp::update(){
    ofSoundUpdate();
    volume = ofSoundGetSpectrum(nBandsToGet);
    
    //FFT解析を行い、音量の平均を出す
    for (int i = 0; i<nBandsToGet; i++) {
        fftSmoothed[i]*=0.96f;
        if (fftSmoothed[i]<volume[i]) {
            fftSmoothed[i]=volume[i];
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    int start_x = 200;
    int base_y = 500;
    float width = (float)(800)/nBandsToGet;
    
    ofSetColor(55, 190, 260);
    for (int i =0; i<nBandsToGet; i++) {
        ofDrawRectangle(start_x+i*width, base_y, width, -(fftSmoothed[i])*400);
    }
    
    ofSetColor(200, 20, 105, 50);
    for (int i=0; i<nBandsToGet; i++) {
        ofDrawRectangle(start_x+i*width, base_y, width, (fftSmoothed[i])*300);
    }

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
