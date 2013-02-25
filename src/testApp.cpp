#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    int width = ofGetWidth()*0.25;
    for(int i = 0 ; i< 4 ; i++)
    {
        pos[i].x = width*i;
        size[0].x = width;
    }
    
	duration.setup(12345);
	ofAddListener(duration.events.trackUpdated, this, &testApp::trackUpdated);

}
//--------------------------------------------------------------
//Or wait to receive messages, sent only when the track changed
void testApp::trackUpdated(ofxDurationEventArgs& args){
	if(args.track->name=="/POS1")
    {
        pos[0].y = args.track->value;
    }
    else if(args.track->name=="/POS2")
    {
        pos[1].y = args.track->value;
    }
    else if(args.track->name=="/POS3")
    {
        pos[2].y = args.track->value;
    }
    else if(args.track->name=="/POS4")
    {
        pos[3].y = args.track->value;
    }
    else if(args.track->name=="/SIZE1")
    {
        size[0].y = args.track->value;
    }
    else if(args.track->name=="/SIZE2")
    {
        size[1].y = args.track->value;
    }
    else if(args.track->name=="/SIZE3")
    {
        size[2].y = args.track->value;
    }
    else if(args.track->name=="/SIZE4")
    {
        size[3].y = args.track->value;
    }
    
    
}
//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    for(int i = 0 ; i< 4 ; i++)
    {
        ofRect(pos[i].x,pos[i].y,size[0].x,size[0].y);
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}