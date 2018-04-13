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
    
    //FFT
    fftSmoothed = new float[8192];
    for (int i = 0; i<8192; i++) {
        fftSmoothed[i] = 0;
    }
    
    nBandToGet = 360;

}

//--------------------------------------------------------------
void ofApp::update(){
    ofSoundUpdate();
    volume = ofSoundGetSpectrum(nBandToGet);
    
    //FFT
    for (int i = 0; i<nBandToGet; i++) {
        fftSmoothed[i]*=0.96f;
        if (fftSmoothed[i]<volume[i]) {
            fftSmoothed[i] = volume[i];
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    //cam.begin();
    int start_x = 200;
    int base_y = 500;
    float width = (float)(800)/nBandToGet;
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    for (int i =0; i<nBandToGet; i+=5) {
        ofPushMatrix();
        ofSetColor(ofColor::fromHsb((float)255/nBandToGet*i, 100, 255));
        float length = 300 * fftSmoothed[i%nBandToGet];
        ofRotateZ(i);
        ofDrawRectangle(0,150, 5, length);
        ofPopMatrix();
        
    }
   // cam.end();

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
