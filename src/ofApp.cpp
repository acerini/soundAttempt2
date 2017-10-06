#include "ofApp.h"

//----------------------PROJECT DESCRIPTION--------------------------
    //Title: Reverse Synesthesia - turning the visual into sound
    //Multi-sensory art. As you paint, compose a musical composition
    //Creator: Arielle Cerini
    //Class: Art Code and Interactivity
    //Project 1: Incorporating graphics, interactivity, and sound
    //Date: 10/3/2017

    //Program links with Garage Band to use different instruments and record the music 


//--------------------------REFERENCES-----------------------------

    //code is a modification of https://github.com/danomatika/ofxMidi
    //http://www.asciitable.com


//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    ofSetLogLevel(OF_LOG_VERBOSE);
    
    // print the available output ports to the console
    midiOut.listPorts(); // via instance
    
    // connect
    midiOut.openPort("IAC Driver Bus 1"); // name the output port for midi
    
    channel = 1;
    currentPgm = 0;
    note = 0;
    velocity = 0;
    pan = 0;
    bend = 0;
    touch = 0;
    polytouch = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    //there is no visual interface for this code. the graphics are physical
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    //Notes in the key of C
    
    //C
    if(key== OF_KEY_DOWN) { //red paint brush
        note = 60;
        velocity = 90; //corresponds with volume
        midiOut.sendNoteOn(channel, note,  velocity); //send note to Garage Band
        
    //D
    } else if(key == OF_KEY_RIGHT) { //yellow paint brush
        note = 62; //whole step up
        velocity = 90; //corresponds with volume
        midiOut.sendNoteOn(channel, note,  velocity); //send note to Garage Band
        
    //E
    } else if(key == OF_KEY_UP) {//green paint brush
        note = 64; //whole step up
        velocity = 90; //corresponds with volume
        midiOut.sendNoteOn(channel, note,  velocity); //send note to Garage Band
        
    //F
    } else if(key == OF_KEY_LEFT) {//blue paint brush
        note = 65;//half step up
        velocity = 90; //corresponds with volume
        midiOut.sendNoteOn(channel, note,  velocity); //send note to Garage Band
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




