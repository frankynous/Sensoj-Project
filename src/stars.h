#pragma once
#include "ofMain.h"

class stars
{
public:
	stars();
	~stars();

	void setup();
	void update();
	void draw();

	ofParameter<int> quantity;
	vector<float> posXstar;
	vector<float> posYstar;
	vector<float> sizeStar;


};

