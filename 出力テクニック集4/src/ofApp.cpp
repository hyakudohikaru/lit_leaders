#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    
    ofBackground(0, 0, 0);
    
    ofEnableDepthTest();
    
    Light.enable();
    Light.setPosition(-100, 100,500);
    
    glPointSize(3);
    
    myMesh = ofSpherePrimitive(200,70).getMesh();
    for (int i = 0; i<myMesh.getVertices().size(); i++) {
        myMesh.addColor(ofFloatColor(0.5,1.0,1.0,0.5));
    }
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i<myMesh.getVertices().size(); i++) {
        ofVec3f point = myMesh.getVertices()[i]/300.0;
        float size = 80+100*ofNoise(point.x, point.y, point.z, ofGetElapsedTimef());
        ofVec3f newpoint = point.normalize()*size;
        myMesh.setVertex(i, newpoint);
        
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    myMesh.setMode(OF_PRIMITIVE_POINTS);
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

