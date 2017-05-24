#include "galaxy.h"



galaxy::galaxy()
{
}


galaxy::~galaxy()
{
}

//--------------------------------------------------------------
void galaxy::setup() {
	ofBackground(0);

	stars1.setup();
	stars2.setup();
	stars3.setup();
	stars4.setup();
	stars5.setup();

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

	endTime1 = 2000;
	endTime2 = 4000;
	endTime3 = 6000;
	endTime4 = 8000;
	
	timerEnd = false;
	startTime = ofGetElapsedTimeMillis();
}

//--------------------------------------------------------------
void galaxy::update() {
	timer = ofGetElapsedTimeMillis() - startTime;

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

}

//--------------------------------------------------------------
void galaxy::draw() {

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
}