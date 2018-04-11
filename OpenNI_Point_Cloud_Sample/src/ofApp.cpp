#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0x000000);
    ofSetFrameRate(60);
    
    kinect.setRegistration(true);
    kinect.init();
    kinect.open();
    
    kinectAngle = 0;
    kinect.setCameraTiltAngle(kinectAngle);

}

//--------------------------------------------------------------
void ofApp::update(){
    kinect.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    easyCam.begin();
    
    drawPointcloud();
    easyCam.end();
}

//--------------------------------------------------------------
void ofApp::drawPointcloud(){
    //画面の幅と高さ
    int w = 640;
    int h = 480;
    //メッシュ生成
    ofMesh mesh;
    mesh.setMode(OF_PRIMITIVE_POINTS);
    glPointSize(0.1);
    
    int step = 2;
    for (int y = 0; y<h; y+=step) {
        for (int x = 0; x<w; x += step) {
            if (kinect.getDistanceAt(x, y)>0) {
                mesh.addColor(kinect.getColorAt(x, y));
                mesh.addVertex(kinect.getWorldCoordinateAt(x, y));
            }
        }
    }
    //メッシュの頂点
    ofPushMatrix();
    ofScale(-1, -1, -1);
    ofTranslate(0, 0, -1000);
    glEnable(GL_DEPTH_TEST);
    mesh.drawVertices();
    ofPopMatrix();
    
}

//--------------------------------------------------------------
void ofApp::exit(){
    //Kinect終了
    kinect.close();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case OF_KEY_UP:
            kinectAngle++;
            if (kinectAngle>27) kinectAngle = 27;
            kinect.setCameraTiltAngle(kinectAngle);
            break;
            
        case OF_KEY_DOWN:
            kinectAngle--;
            if (kinectAngle<-27) kinectAngle=27;
            kinect.setCameraTiltAngle(kinectAngle);
            break;
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
