#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    
    Kinect.setRegistration(true);
    Kinect.init();
    Kinect.open();
    if (!Kinect.isConnected()) {
        ofSystemAlertDialog("Serial Error: Kinect is not connected. Check a USB port then push space ber.");
    }
    
    //Gui設定
    ofxGuiSetDefaultWidth(300);//Guiの横幅
    ofxGuiSetDefaultHeight(18);//高さ
    gui.setup("Depth Masking Control");
    gui.setPosition(10,10);
    //gui.add(radius.set("Radius",0,0,255));
    
    gui.add(near.set("near",0,0,255));
    gui.add(far.set("far",255,0,255));

}

//--------------------------------------------------------------
void ofApp::update(){
    Kinect.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
   // Kinect.draw(0, 0, ofGetWidth(), ofGetHeight());
    
    if (Kinect.isFrameNew()) {
        cameraImage.setFromPixels(Kinect.getPixels().getData(), Kinect.width, Kinect.height, OF_IMAGE_COLOR);
        depthImage.setFromPixels(Kinect.getDepthPixels().getData(), Kinect.width, Kinect.height, OF_IMAGE_GRAYSCALE);
        
        unsigned char * cameraPixels = cameraImage.getPixels().getData();//RGB配列データ
        unsigned char * depthPixels = depthImage.getPixels().getData();//深度配列データ
        maskedImage.allocate(Kinect.width, Kinect.height, OF_IMAGE_COLOR);
        unsigned char * maskedPixels = maskedImage.getPixels().getData();//マスク配列データ
        
        for (int i = 0; i<Kinect.width*Kinect.height; i++) {
            if ((255-far.get()<depthPixels[i])&& (depthPixels[i]<255-near.get())) {
                maskedPixels[i*3] = cameraPixels[i*3+1];//[i*3]じゃないの？
                maskedPixels[i*3+1] = cameraPixels[i*3+1];
                maskedPixels[i*3+2] = cameraPixels[i*3+2];
            }else{
                maskedPixels[i*3] = 0;//r
                maskedPixels[i*3+1] = 0;//g
                maskedPixels[i*3+2] = 0;//b
            }
        }
        maskedImage.setFromPixels(maskedPixels, Kinect.width, Kinect.height, OF_IMAGE_COLOR);
        
    }
    cameraImage.draw(0, 0, Kinect.width,Kinect.height);
    depthImage.draw(0, Kinect.height, Kinect.width/2,Kinect.height/2);
    maskedImage.draw(Kinect.width/2, Kinect.height, Kinect.width/2, Kinect.height/2);
    
    //ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, radius.get());
    
    gui.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case ' ':
            Kinect.init();
            Kinect.open();
            if (!Kinect.isConnected()) {
                ofSystemAlertDialog("Serial Error: Kinect is not connected. Check a USB port then push space ber.");
            }
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
