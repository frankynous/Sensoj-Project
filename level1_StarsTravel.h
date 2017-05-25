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
	asteroid rock;
	asteroidsRain rain;
	asteroidsRain rain2;
	SensojShip shipFlay;

	ofSoundPlayer backSound1;
	ofSoundPlayer narration1;	
	ofSoundPlayer gasdownsound;
	ofSoundPlayer landingsound;

	ofParameter<float> endTime5;
	ofParameter<float> endTime6;
	ofParameter<float> timer;
	float startTime;
	bool timerEnd;
	ofParameter<int> counter;
	ofParameter<int> fade;
	ofParameter<int> resultado;

	vector<atomGas> gas;
	ofParameter<float> gasTime;
	ofParameter<float> barW;
	ofParameter<float> barRed;
	ofParameter<float> barGreen;
	ofParameter<float> barBlue;

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

