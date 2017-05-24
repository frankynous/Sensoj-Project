#pragma once
#include "ofMain.h"

class asteroid
{
public:
	void asSetup();
	void asShape();
	void asMove();
	void collision(float xAs, float yAs);

	ofParameter<float> posX;
	ofParameter<float> posY;
	ofParameter<float> size;
	ofParameter<float> fade;
	ofParameter<int> hit;
	
	ofImage asteroid1;
	ofImage asteroid_crashed;
};

