#pragma once
#include "ofMain.h"
#include "level1_StarsTravel.h"
//#include "level2_MazeExplore.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		level1_StarsTravel starsTravel;
		//level2_MazeExplore mazeExplore;

		ofImage bgStart;
		ofImage bgLevel1win;
		ofImage bgLevel1lose;
		ofImage bgLevel2win;
		ofImage bgLevel2lose;
		ofImage bgLevel3win;
		ofImage bgLevel3lose;

		ofParameter<float> bgX;
		ofParameter<float> bgY;
		ofParameter<float> bgWidth;
		ofParameter<float> bgHeight;

		ofParameter<int> gameStart;
		ofParameter<int> level1play;
		ofParameter<int> level1win;
		ofParameter<int> level1lose;
		ofParameter<int> level2play;
		ofParameter<int> level2win;
		ofParameter<int> level2lose;
		ofParameter<int> level3play;
		ofParameter<int> level3win;
		ofParameter<int> level3lose;
		ofParameter<int> status;
		ofParameter<int> counter;

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
