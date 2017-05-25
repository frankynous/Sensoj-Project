#pragma once
#include "ofMain.h"
#include "ofxGifDecoder.h"
#include "ofxGifFile.h"

class atomGas
{
public:
	void setup();
	void update();
	void draw();
	void collision(float xAt, float yAt);

	ofSoundPlayer gasgotsound;

	ofImage atom;
	ofParameter<float> atomX;
	ofParameter<float> atomY;
	ofParameter<float> atomSize;
	ofParameter<float> fade;
	ofParameter<int> hit;
	ofParameter<int> counter;
};

