#pragma once
#include "ofMain.h"

class asteroid
{
public:
	void asSetup();
	void asShape();
	void asMove();
	void collision(float xAs, float yAs);

	ofSoundPlayer crashsound;

	ofParameter<float> posX;
	ofParameter<float> posY;
	ofParameter<float> size;
	ofParameter<float> fade;
	ofParameter<int> hit;
	ofParameter<int> counter;
	
	ofImage asteroid1;
	ofImage asteroid_crashed;
};

