#pragma once

#include "ofMain.h"


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
    
    int mousepoint;
    double dis = std::sqrt((mouseX-(ofGetWidth()/2))*(mouseX-(ofGetWidth()/2))+(mouseY-(ofGetHeight()/2))*(mouseY-(ofGetHeight()/2)));
    
    double radian = std::atan2(mouseY-(ofGetHeight()/2),mouseX-(ofGetWidth()/2));
    double deg =radian * 180.0/PI;
    double degr = deg + 360;
    int font = 0;
    
    ofTrueTypeFont frabk;
    
    int Try[360];
   
		
};

