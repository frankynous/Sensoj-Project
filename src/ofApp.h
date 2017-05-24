#pragma once
#include "ofMain.h"
//#include "ofxGui.h"
#include "asteroid.h"
#include "asteroidsRain.h"
#include "stars.h"
#include "atomGas.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		//asteroid asteroid;
		asteroidsRain rain;
		asteroidsRain rain2;

		stars stars1;
		stars stars2;
		stars stars3;
		stars stars4;
		stars stars5;

		float startTime;
		bool timerEnd;
		ofParameter<float> endTime1;
		ofParameter<float> endTime2;
		ofParameter<float> endTime3;
		ofParameter<float> endTime4;
		ofParameter<float> endTime5;
		ofParameter<float> endTime6;
		ofParameter<float> timer;

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

		vector<atomGas> gas;

		ofImage ship;
		ofParameter<float> shipX;
		ofParameter<float> shipY;
		ofParameter<float> shipSize;

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

};
