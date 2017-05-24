#pragma once
#include "ofMain.h"
#include "ofxGifDecoder.h"
#include "ofxGifFile.h"

class atomGas
{
public:
	atomGas();
	~atomGas();

	void setup();
	void update();
	void draw();

	//ofxGifDecoder decoder;
	//ofxGifFile atom;

	ofImage atom;
	ofParameter<float> atomX;
	ofParameter<float> atomY;
	ofParameter<float> atomSize;
};

