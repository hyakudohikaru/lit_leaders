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
    
    int centerX = ofGetWidth()/2;
    int centerY = ofGetHeight()/2;
    double dis = std::sqrt((mouseX-(centerX))*(mouseX-(centerX))+(mouseY-(centerY))*(mouseY-(centerY)));
    
    double radian = std::atan2(mouseY-(centerY),mouseX-(centerX));
    double deg =radian * 180.0/PI;
    double degr = deg + 360;
    double dis2 = dis-(dis*cos(PI/180));
    double dis3 = dis*sin(PI/180);
    
    
    int font = 0;
    int time;
    
    ofTrueTypeFont frabk;

    
    
    
    
    
    
   
		
};

