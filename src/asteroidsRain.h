#pragma once
#include "ofMain.h"
#include "asteroid.h"

class asteroidsRain
{
public:
	void rainSetup();
	void rainUpdate();
	void rainDraw();

	ofParameter<float> posXstar;
	ofParameter<float> posYstar;
	ofParameter<float> sizeStar;

	vector<asteroid> asteroids;
};

