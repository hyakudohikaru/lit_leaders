#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    
    ofBackground(0, 0, 0);
    
    ofEnableDepthTest();
    
    Light.enable();
    Light.setPosition(-100, 100,500);
    
    glPointSize(3);
    
    myMesh = ofPlanePrimitive(1000,1000,100,100).getMesh();
    

}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i<myMesh.getVertices().size(); i++) {
        ofVec3f point = myMesh.getVertices()[i]/400.0;
        float z = ofNoise(point.x, point.y, ofGetElapsedTimef())*200.0;
        myMesh.setVertex(i, ofVec3f(myMesh.getVertices()[i].x,myMesh.getVertices()[i].y,z));
        
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    myMesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    myMesh.draw();
    
    cam.end();

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
