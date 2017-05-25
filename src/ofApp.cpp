#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(255);
	ofSetFrameRate(60);

	bgStart.load("backstart.jpg");
	bgLevel1win.load("backlevel1_1.gif");
	bgLevel1lose.load("backlevel1_2.gif");
	bgLevel2win.load("backlevel2_1.gif");
	bgLevel2lose.load("backlevel2_2.gif");
	bgLevel3win.load("backlevel3_1.jpg");
	bgLevel3lose.load("backlevel3_2.jpg");

	bgX = 0; //- ofGetWidth() / 2;
	bgY = 0; //- ofGetHeight() / 2;
	bgWidth = ofGetWidth();
	bgHeight = ofGetHeight();

	gameStart = 0;
	level1win = 1;
	level1lose = 2;
	level2win = 3;
	level2lose = 4;
	level3win = 5;
	level3lose = 6;
	status = gameStart;

	counter = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
	
	if (status == level1play)
	{
		if (counter == 0)
		{
			starsTravel.setup();
			counter = 1;
		}
		
		starsTravel.update();

		if (starsTravel.resultado == 1) {
			status = level1win;
		}
	}
	else
	{
		status = gameStart;
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	if (status == gameStart)
	{
		bgStart.draw(bgX, bgY, bgWidth, bgHeight);

		int btX = 430;
		int btY = 610;
		int btW = 220;
		int btH = 50;
		ofSetColor(255,0,0,100);
		ofDrawRectangle(btX,btY,btW,btH);
		ofSetColor(255);

		if (ofGetMouseX() >= btX && ofGetMouseX() <= btX + btW && ofGetMouseY() >= btY && ofGetMouseY() <= btY + btH)
		{
			status = level1play;
		}
	}
	
	//LEVEL 1
	if (status == level1play)
	{
		starsTravel.draw();
	}
	else if (status == level1win)
	{
		bgLevel1win.draw(bgX, bgY, bgWidth, bgHeight);
	}
	else if (status == level1lose)
	{
		bgLevel1lose.draw(bgX, bgY, bgWidth, bgHeight);
	}
	else
	{
		status = gameStart;
	}

	//LEVEL 2
	if (status == level2play)
	{
		//mazeExplore.draw();
	}
	else if (status == level2win)
	{
		bgLevel1win.draw(bgX, bgY, bgWidth, bgHeight);
	}
	else if (status == level2lose)
	{
		bgLevel2lose.draw(bgX, bgY, bgWidth, bgHeight);
	}
	else
	{
		status = gameStart;
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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