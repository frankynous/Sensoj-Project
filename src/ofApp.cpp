#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofHideCursor();
	ofBackground(0);

	stars1.setup();
	stars2.setup();
	stars3.setup();
	stars4.setup();
	stars5.setup();

	endTime1 = 2000;	
	endTime2 = 4000;
	endTime3 = 6000;
	endTime4 = 8000;
	endTime5 = 8000;
	endTime6 = 16000;
	timerEnd = false;
	startTime = ofGetElapsedTimeMillis();

	planet1.load("planet_1.png");
	planet2.load("planet_2.png");
	planet3.load("planet_3.png");

	planet1X = ofRandom(-400, 400);
	planet1Y = ofRandom(-300, 300);
	planet1Size = 70;
	planet2X = ofRandom(-300, 300);
	planet2Y = ofRandom(-200, 200);
	planet2Size = 30;
	planet3X = ofRandom(-100, 100);
	planet3Y = ofRandom(-100, 100);
	planet3Size = 10;

	if (planet1X <= 100 && planet1X >= -100) {
		planet1X = ofRandom(-400, 400);
	}
	if (planet1Y <= 100 && planet1Y >= -100) {
		planet1Y = ofRandom(-300, 300);
	}
	if (planet2X <= 100 && planet2X >= -100) {
		planet2X = ofRandom(-300, 300);
	}
	if (planet2Y <= 100 && planet2Y >= -100) {
		planet2Y = ofRandom(-200, 200);
	}

	rain.rainSetup();
	rain2.rainSetup();

	for (float i = 0; i < 3; i++)
	{
		gas.push_back(atomGas());
		gas[i].setup();
	}

	ship.load("ship_1.png");
	shipSize = 100;
	//shipX = ofGetMouseX();
	//shipY = ofGetMouseY();
}

//--------------------------------------------------------------
void ofApp::update(){
	timer = ofGetElapsedTimeMillis() - startTime;
	//std::cout << "Tiempo: " << timer << endl;

	stars1.update();

	if (timer >= endTime1) {
		stars2.update();
	}

	if (timer >= endTime2) {
		stars3.update();
	}

	if (timer >= endTime3) {
		stars4.update();
	}

	if (timer >= endTime4) {
		stars5.update();
	}

	planet1Size = planet1Size + 0.05;
	planet2Size = planet2Size + 0.03;
	planet3Size = planet3Size + 0.01;

	if (timer >= endTime5) {
		rain.rainUpdate();
	}

	if (timer >= endTime6) {
		rain2.rainUpdate();
		for (float i = 0; i < 3; i++)
		{
			gas.push_back(atomGas());
			gas[i].update();
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);

	stars1.draw();

	if (timer >= endTime1) {
		stars2.draw();
	}

	if (timer >= endTime2) {
		stars3.draw();
	}

	if (timer >= endTime3) {
		stars4.draw();
	}

	if (timer >= endTime4) {
		stars5.draw();
	}

	planet3.draw(planet3X, planet3Y, planet3Size, planet3Size);
	planet2.draw(planet2X, planet2Y, planet2Size, planet2Size);
	planet1.draw(planet1X, planet1Y, planet1Size, planet1Size);

	if (timer >= endTime5) {
		rain.rainDraw();
	}

	if (timer >= endTime6) {
		rain2.rainDraw();
		for (float i = 0; i < 3; i++)
		{
			gas.push_back(atomGas());
			gas[i].draw();
		}
	}

	shipX = ofGetMouseX();
	shipY = ofGetMouseY();

	ship.draw(shipX-562, shipY-412, shipSize, shipSize);
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