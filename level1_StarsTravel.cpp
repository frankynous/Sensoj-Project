#include "level1_StarsTravel.h"

//--------------------------------------------------------------
void level1_StarsTravel::setup() {
	ofBackground(0);

	backgStars.setup();

	endTime5 = 8000;
	endTime6 = 16000;
	gasTime = 30000;
	timerEnd = false;
	startTime = ofGetElapsedTimeMillis();

	rain.rainSetup();
	//rain2.rainSetup();

	rocaX = roca.posX;
	rocaY = roca.posY;

	for (float i = 0; i < 3; i++)
	{
		gas.push_back(atomGas());
		gas[i].setup();
	}

	gasLevel.load("gas_level.png");
	gasLevelSizeW = 200;
	gasLevelSizeH = gasLevelSizeW / 3;
	gasLevelX = ofGetWidth()/2 - (gasLevelSizeW + 20);
	gasLevelY = ofGetHeight()/2 - (gasLevelSizeH + 47);

	shipFlay.setup();
}

//--------------------------------------------------------------
void level1_StarsTravel::update() {
	timer = ofGetElapsedTimeMillis() - startTime;
	
	backgStars.update();

	if (timer >= endTime5) {
		rain.rainUpdate();
	}

	if (timer >= endTime6) {
		//rain2.rainUpdate();
		for (float i = 0; i < 3; i++)
		{
			gas.push_back(atomGas());
			gas[i].update();
		}
	}

	shipFlay.update();
}

//--------------------------------------------------------------
void level1_StarsTravel::draw() {
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);

	backgStars.draw();

	if (timer >= endTime5) {
		rain.rainDraw();
	}

	if (timer >= endTime6) {
		//rain2.rainDraw();
		for (float i = 0; i < 3; i++)
		{
			gas.push_back(atomGas());
			gas[i].draw();
		}
	}

	if (timer <= gasTime) {
		barW = ofMap(timer, gasTime, 0, 0, gasLevelSizeW-46);
		barGreen = ofMap(timer, gasTime, 0, 0, 255);
		barRed = ofMap(timer, 0, gasTime, 0, 255);
	}
	barBlue = 0;
	ofSetColor(barRed, barGreen, barBlue);
	ofDrawRectangle(gasLevelX + 47, gasLevelY + 20, barW, 20);
	ofSetColor(255,255,255);
	gasLevel.draw(gasLevelX, gasLevelY, gasLevelSizeW, gasLevelSizeH);

	rain.collision(shipFlay.shipX, shipFlay.shipY);
	//rain2.collision(shipFlay.shipX, shipFlay.shipY);

	shipFlay.draw();

	shipFlay.collision(rocaX, rocaY);
	
	/*if (ofDist(shipFlay.shipX, shipFlay.shipY, roca.posX, roca.posY) < 10) {
		ofSetColor(255, 255, 255, 10);
		shipFlay.draw();
		ofSetColor(255, 255, 255, 255);
	}
	else
	{
		ofSetColor(255, 255, 255, 255);
		shipFlay.draw();
	}*/
}

//--------------------------------------------------------------
void level1_StarsTravel::keyPressed(int key) {

}

//--------------------------------------------------------------
void level1_StarsTravel::keyReleased(int key) {

}

//--------------------------------------------------------------
void level1_StarsTravel::mouseMoved(float x, float y) {
	
}

//--------------------------------------------------------------
void level1_StarsTravel::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void level1_StarsTravel::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void level1_StarsTravel::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void level1_StarsTravel::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void level1_StarsTravel::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void level1_StarsTravel::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void level1_StarsTravel::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void level1_StarsTravel::dragEvent(ofDragInfo dragInfo) {

}
