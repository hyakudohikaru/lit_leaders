#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    
    cout << "やあ、こんにちは" << endl;
    cout << 2 << '+' << 3 << '=' << 2 + 3 << endl;
    cout << "π=" << 3.1419 << "..." << endl;
    cout << "2+2=" << 2 + 2 << endl;
    cout << "2*9=" << 2 * 9 << endl;
    cout << "9/4=" << 9 / 4 << endl;
    cout << "9.0/4=" << 9.0 / 4 << endl;
    cout << "9/4=" << 9 / 4 << "..." << 9 % 4 << endl;
    
    return 0;
    
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());
    
 

    
}
