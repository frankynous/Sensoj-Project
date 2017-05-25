#pragma once
#include "ofMain.h"
#include "stars.h"

class galaxy
{
public:
	galaxy();
	~galaxy();

	void setup();
	void update();
	void draw();
	void collision(float Xp, float Yp);

	stars stars1;
	stars stars2;
	stars stars3;
	stars stars4;
	stars stars5;
	
	ofImage planet1;
	ofImage planet2;
	ofImage planet3;
	ofParameter<float> planet1X;
	ofParameter<float> planet1Y;
	ofParameter<float> planet1Size;
	ofParameter<float> planet2X;
	ofParameter<float> planet2Y;
	ofParameter<float> planet2Size;
	ofParameter<float> planet3X;
	ofParameter<float> planet3Y;
	ofParameter<float> planet3Size;
	ofParameter<int> hit;

	float startTime;
	bool timerEnd;
	ofParameter<float> timer;
	ofParameter<float> endTime1;
	ofParameter<float> endTime2;
	ofParameter<float> endTime3;
	ofParameter<float> endTime4;
};

