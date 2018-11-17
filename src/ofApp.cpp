#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    uint64_t mouseMoveMicroseconds = ofGetElapsedTimeMicros();
    uint64_t mouseMoveDeltaMicroseconds = mouseMoveMicroseconds - previousMouseMoveMicroseconds;
    previousMouseMoveMicroseconds = mouseMoveMicroseconds;
    
    int deltaX = x - mouseX;
    int deltaY = y - mouseY;
    
    mouseX = x;
    mouseY = y;
    
    
    float distance = sqrt(deltaX * deltaX + deltaY * deltaY);
    float mouseMoveDelta = static_cast<float>(mouseMoveDeltaMicroseconds * 0.001); // milliseconds
    ofLog(OF_LOG_NOTICE, "delta: %5.2f ms -- %5.2f pixels -- (%2d, %2d) xy delta", mouseMoveDelta, distance, deltaX, deltaY);
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
