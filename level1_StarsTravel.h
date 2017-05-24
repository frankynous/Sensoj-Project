#pragma once

#include "asteroid.h"
#include "asteroidsRain.h"
#include "atomGas.h"
#include "galaxy.h"
#include "SensojShip.h"

class level1_StarsTravel
{
public:

	void setup();
	void update();
	void draw();

	galaxy backgStars;

	asteroid roca;
	ofParameter<float> rocaX;
	ofParameter<float> rocaY;

	asteroidsRain rain;
	//asteroidsRain rain2;
	SensojShip shipFlay;

	ofParameter<float> endTime5;
	ofParameter<float> endTime6;
	float startTime;
	bool timerEnd;
	ofParameter<float> timer;
	
	ofParameter<float> gasTime;
	ofParameter<float> barW;
	ofParameter<float> barRed;
	ofParameter<float> barGreen;
	ofParameter<float> barBlue;

	vector<atomGas> gas;

	ofImage gasLevel;
	ofParameter<float> gasLevelX;
	ofParameter<float> gasLevelY;
	ofParameter<float> gasLevelSizeW;
	ofParameter<float> gasLevelSizeH;

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(float x, float y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
};

