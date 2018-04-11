#pragma once

#include "ofMain.h"
#include "ofxKinect.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofxKinect Kinect;
    ofImage cameraImage;//RGBカメラ
    ofImage depthImage;//赤外線カメラ
    
    //ofParameter<int> radius;//int型のGui用パラメーター
    ofxPanel gui;//Guiの外枠
    
    ofParameter<int> near;//int型のGui用パラメータ(Kinectの描画範囲下限)
    ofParameter<int> far;//上限
    
    ofImage maskedImage;//指定範囲内の画像を出力
		
};
