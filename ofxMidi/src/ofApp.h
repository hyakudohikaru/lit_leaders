#pragma once

#include "ofMain.h"
#include "ofxMidi.h"
#include "ofxMidiOutputManager.h"

class ofApp : public ofBaseApp, public ofxMidiListener{

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
    
    void exit();
    void newMidiMessage(ofxMidiMessage& msg);//呼ぶ
    void audioRequested(float *buf, float bufSize, int nChan);//音生成
    
    
    ofxMidiIn midiIn;//midiの入力受け入れ
    ofxMidiMessage midiMessage;//入力データ保存
    ofxMidiOutputManager manager;//音出力
		
};
