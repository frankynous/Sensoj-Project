#include "level1_StarsTravel.h"

//--------------------------------------------------------------
void level1_StarsTravel::setup() {
	ofBackground(0);
	ofHideCursor();

	backSound1.load("backsound1.mp3");
	narration1.load("narration1.mp3");
	gasdownsound.load("gasdown.mp3");
	
	backSound1.setLoop(true);
	backSound1.play();
	
	backgStars.setup();

	endTime5 = 8000;
	endTime6 = 16000;
	gasTime = 60000;
	timerEnd = false;
	startTime = ofGetElapsedTimeMillis();
	counter = 0;
	resultado = 0;

	gasLevel.load("gas_level.png");
	gasLevelSizeW = 200;
	gasLevelSizeH = gasLevelSizeW / 3;
	gasLevelX = ofGetWidth() / 2 - (gasLevelSizeW + 20);
	gasLevelY = ofGetHeight() / 2 - (gasLevelSizeH + 47);

	rain.rainSetup();
	rain2.rainSetup();

	for (float i = 0; i < 3; i++)
	{
		gas.push_back(atomGas());
		gas[i].setup();
	}

	shipFlay.setup();
	narration1.play();
}

//--------------------------------------------------------------
void level1_StarsTravel::update() {
	timer = ofGetElapsedTimeMillis() - startTime;
	
	backgStars.update();

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

	shipFlay.update();

	if (backgStars.hit > 0)
	{
		resultado = 1;
		std::cout << "Resultado: " << resultado << endl;
	}

}

//--------------------------------------------------------------
void level1_StarsTravel::draw() {
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);

	backgStars.draw();

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

	for (int i = 0; i < 3; i++)
	{
		if (gas[i].hit > 0) {
			gasTime = gasTime + 1000;
		}
	}

	if (timer <= gasTime) {
		barW = ofMap(timer, gasTime, 0, 0, gasLevelSizeW-46);
		barGreen = ofMap(timer, gasTime, 0, 0, 255);
		barRed = ofMap(timer, 0, gasTime, 0, 255);
	}
	
	if (timer >= gasTime/2 && counter == 0)
	{
		gasdownsound.play();
		counter = 1;
	}

	barBlue = 0;
	ofSetColor(barRed, barGreen, barBlue);
	ofDrawRectangle(gasLevelX + 47, gasLevelY + 20, barW, 20);
	ofSetColor(255,255,255);
	gasLevel.draw(gasLevelX, gasLevelY, gasLevelSizeW, gasLevelSizeH);

	rain.collision(shipFlay.shipX, shipFlay.shipY);
	rain2.collision(shipFlay.shipX, shipFlay.shipY);

	rock.collision(shipFlay.shipX, shipFlay.shipY);

	for (int i = 0; i < 3; i++)
	{
		gas[i].collision(shipFlay.shipX, shipFlay.shipY);
	}

	backgStars.collision(shipFlay.shipX, shipFlay.shipY);

	shipFlay.draw();
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
