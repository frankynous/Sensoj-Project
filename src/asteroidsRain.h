#pragma once
#include "ofMain.h"
#include "asteroid.h"

class asteroidsRain
{
public:
	void rainSetup();
	void rainUpdate();
	void rainDraw();
	void collision(float xRain, float yRian);

	vector<asteroid> asteroids;
};

