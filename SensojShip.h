#pragma once
#include "ofMain.h"

class SensojShip
{
public:
	void setup();
	void update();
	void draw();
	void collision(float xShip, float yShip);

	ofImage ship;
	ofImage shipCrashed;
	ofParameter<float> shipX;
	ofParameter<float> shipY;
	ofParameter<float> shipSize;
	ofParameter<float> fade;
	ofParameter<int> hit;
};

