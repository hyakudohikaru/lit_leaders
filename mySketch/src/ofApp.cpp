#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for (int y = 0; y < ofGetHeight(); y++){
        for (int x = 0; x<ofGetWidth(); x++){
            mesh.addVertex(ofPoint(x,y,0)); //
            mesh.addColor(ofFloatColor(0,0,0));  //     }
        }
        
        //
        // indices
        for (int y = 0; y<ofGetHeight()-1; y++){
            for (int x=0; x<ofGetWidth()-1; x++){
                mesh.addIndex(x+y*ofGetWidth());               // 0
                mesh.addIndex((x+1)+y*ofGetWidth());           // 1
                mesh.addIndex(x+(y+1)*ofGetWidth());           // 10
                
                mesh.addIndex((x+1)+y*ofGetWidth());           // 1
                mesh.addIndex((x+1)+(y+1)*ofGetWidth());       // 11
                mesh.addIndex(x+(y+1)*ofGetWidth());           // 10
            }
        }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
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
