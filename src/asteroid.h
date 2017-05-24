#pragma once
#include "ofMain.h"


class asteroid
{
public:
	void asSetup();
	void asShape();
	void asMove();
	
	ofParameter<float> posX;
	ofParameter<float> posY;
	ofParameter<float> size;
	
	ofImage asteroid1;
	ofImage asteroid2;
	ofImage asteroid3;
};

