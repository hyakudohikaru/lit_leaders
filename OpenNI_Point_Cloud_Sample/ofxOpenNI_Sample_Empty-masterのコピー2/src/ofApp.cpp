#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //windowの設定
    ofBackground(0,0,0);
    ofSetWindowShape(1280,480);
    ofSetFrameRate(30);
    
    //ofxOpenNIの初期設定
    kinect.setup();
    kinect.setRegister(true);//深度情報
    kinect.setMirror(true);//左右を反転
    kinect.addDepthGenerator();//距離情報の取得がキネクトに組み込まれる
    kinect.addImageGenerator();//色情報
    
    kinect.getDepthGenerator().GetAlternativwViewPointCap().SetViewPoint(kinect.getImageGenerator());
    
    
    kinect.start();
    
    maskedImage.allocate(640,480,OF_IMAGE_COLOR_ALPHA);
    scenery.load("image.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){//この度に距離画像取得
    kinect.update();
    unsigned char *maskedImageData = maskedImage.getPixels().getData();
    unsigned char *imageData = kinect.getImagePixels().getData();
    unsigned short *depthData = kinect.getDepthRawPixels().getData();
    for (int k = 0; k < 640*480; k++) {
        maskedImageData[k * 4 + 0] = imageData[k * 3 + 0];
        maskedImageData[k * 4 + 1] = imageData[k * 3 + 1];
        maskedImageData[k * 4 + 2] = imageData[k * 3 + 2];
        
        if (880 <= depthData[k] && depthData[k] < 1200) {
            maskedImageData[k * 4 + 3] = 255;
        }else{
            maskedImageData[k * 4 + 3] = 0;
        }
    }
    maskedImage.setFromPixels(maskedImageData, 640, 480, OF_IMAGE_COLOR_ALPHA);
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    kinect.drawDepth(0,0,640,480);//深度画像
    scenery.draw(640,0,640,480);
    maskedImage.draw(640,0,640,480);

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
