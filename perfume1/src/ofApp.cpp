#include <vector>
#include "ofApp.h"

int trackerLength = 40;
float startTime = 0.035;
int stage_mode = 1;
ofBoxPrimitive box;

class Drawer
{
public:
    vector<const ofxBvhJoint*> joints;
    
    void add(const ofxBvhJoint *o){
        joints.push_back(o);
        cout << o->isSite();
    }
    
    void draw(){
        
        
    }
};

class Tracker
{
public:
    
    const ofxBvhJoint *joint;
    deque<ofVec3f> points;
    float trackerLength;
    
    void setup(const ofxBvhJoint *o){
        joint = o;
    }
    
    void update() {
        const ofVec3f &p = joint->getPosition();
        
        if (p.distance(points.front().one()) > 1)
            points.push_front(joint->getPosition());
        
        if (points.size() > trackerLength){
            points.pop_back();
        }
    }
    
    void draw()    {
        if (points.empty()) return;
        
        for (int i = 0; i < points.size() - 1; i++){
            //float a = ofMap(i, 0, points.size() - 1, 1, 0);
            
            ofVec3f &p0 = points[i];
            ofVec3f &p1 = points[i + 1];
            
            float dist = p0.distance(p1);
            
            if (dist < 40) {
                ofSetLineWidth(ofMap(dist, 0, 30, 0, 14));
                ofSetColor(dist*20, 127-dist*10, 255-dist*20);
                ofDrawLine(p0.x, p0.y, p0.z, p1.x, p1.y, p1.z);
            }
        }
    }
    
    void clear() {
        points.clear();
    }
    
    void setTrackerLength(float _trackerLength) {
        trackerLength = _trackerLength;
    }
};

vector<Tracker*> trackers;
vector<Drawer*> drawers;

//--------------------------------------------------------------
void ofApp::setup() {
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    
    rotate = 0;
    
    // setup bvh
    bvh[0].load("bvhfiles/kashiyuka.bvh");
    bvh[1].load("bvhfiles/nocchi.bvh");
    bvh[2].load("bvhfiles/aachan.bvh");
    
    for (int i = 0; i < 3; i++)    {
        bvh[i].play();
    }
    
    track.load("Perfume_globalsite_sound.wav");
    track.play();
    track.setLoop(true);
    
    // setup tracker and drawer
    for (int i = 0; i < 3; i++)
    {
        ofxBvh &b = bvh[i];
        Drawer *d = new Drawer;
        
        for (int n = 0; n < b.getNumJoints(); n++) {
            const ofxBvhJoint *o = b.getJoint(n);
            Tracker *t = new Tracker;
            t->setup(o);
            t->setTrackerLength(trackerLength);
            trackers.push_back(t);
            d->add(o);
        }
        
        drawers.push_back(d);
    }
    
    ofPushMatrix();
    ofTranslate(0, -100);
    ofScale(1, 1, 1);
    ofRotateX(90);
    camera.setFov(90);
    camera.lookAt(ofVec3f(0,0,0));
    camera.setPosition(300, 30, 300);
    //camera.disableMouseInput();
    ofPopMatrix();
    background.load("background.png");
    
}

//--------------------------------------------------------------
void ofApp::update()
{
    
    float t = (track.getPosition() * 64.28);
    t = t / bvh[0].getDuration();
    
    for (int i = 0; i < 3; i++)    {
        bvh[i].setPosition(t);
        bvh[i].update();
    }
    
    for (int i = 0; i < trackers.size(); i++) {
        if (t > startTime) {
            trackers[i]->setTrackerLength(trackerLength);
            trackers[i]->update();
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0,0,0);
    ofSetColor(255, 255, 255);
    background.draw(0,0,ofGetWidth(),ofGetHeight());
    
    glEnable(GL_DEPTH_TEST);
    
    camera.begin();
    ofPushMatrix();
    
    {
        ofTranslate(0, -100);
        //ofRotate(rotate, 0, 1, 0);
        ofScale(1, 1, 1);
        
        ofPushMatrix();
        ofRotateX(90);
        
        camera.setFov(90);
        camera.lookAt(ofVec3f(0,0,0));
        camera.setPosition(320*cos(ofMap(ofGetElapsedTimeMillis(), 0, 2000, 0, PI)), ofGetElapsedTimeMillis()/100, 320*sin(ofMap(ofGetElapsedTimeMillis(), 0, 2000, 0, PI)));
        
        ofPopMatrix();
        
        // draw tracker
        glDisable(GL_DEPTH_TEST);
        ofEnableBlendMode(OF_BLENDMODE_ADD);
        
        for (int i = 0; i < trackers.size(); i++){
            //trackers[i]->draw();
        }
        
        for (int i = 0; i < drawers.size(); i++){
            drawers[i]->draw();
        }
        
    }
    
    ofPopMatrix();
    camera.end();
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'f') {
        ofToggleFullscreen();
    }else if (key=='s'){
        stage_mode=(stage_mode+1)%2;
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
