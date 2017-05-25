#pragma once
#include "ofMain.h"
#include "asteroid.h"
#include "asteroidsRain.h"

class SensojShip
{
public:
	void setup();
	void update();
	void draw();

	asteroid rock;
	asteroidsRain rocks;

	ofImage ship;
	ofImage shipCrashed;
	ofParameter<float> shipX;
	ofParameter<float> shipY;
	ofParameter<float> shipSize;
	ofParameter<float> fade;
	ofParameter<int> crash;
};

