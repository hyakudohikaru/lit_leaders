#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int f(int x, int y)
{
    return 2 * x + y;//①
}

int main( ){
    
    cout << "f(1,2) = " << f(1,2) << endl;
    cout << "f(182, 144) = " << f(182, 144) << endl;
    
    return 0;//②
    
    /* ①と②の違いというか②で０に返したらどうなるの？？ */
    
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
