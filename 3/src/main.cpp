#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    
    int a;
    
    a = 0;
    cout << "a = " << a << endl;
    
    a = 5;
    cout << "a * 2 = " << a*2 << endl;
    
    int b = 0;
    b += 2;
    cout << "b += 2        -> b = " << b << endl;
    
    b++;
    cout << "b++           -> b = " << b << endl;
    
    b = b * 5 + b;
    cout << "b = b * 5 + b -> b = " << b << endl;
    
    b = b * 2 + 2;
    cout << "b = b * 2 + 2 -> b = " << b << endl;
    /* -> は何？？*/
    
    return 0;
    
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
