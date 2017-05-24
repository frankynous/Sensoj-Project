#include "atomGas.h"

atomGas::atomGas()
{
}


atomGas::~atomGas()
{
}

void atomGas::setup() {
	//decoder.decode("energy.gif");
	//atom = decoder.getFile();

	atom.load("energy.gif");
	atomX = ofRandom(-100, 100);
	atomY = ofRandom(-100, 100);
	atomSize = 5;
}

void atomGas::update() {
	if (atomX < 0) {
		atomX--;

		if (atomX < -800) {
			atomSize = 5;
			atomX = ofRandom(-100, 100);
			atomY = ofRandom(-100, 100);
		}
	}
	if (atomX > 0) {
		atomX++;

		if (atomX > 800) {
			atomSize = 5;
			atomX = ofRandom(-100, 100);
			atomY = ofRandom(-100, 100);
		}
	}

	if (atomY < 0) {
		atomY--;

		if (atomY < -800) {
			atomSize = 5;
			atomX = ofRandom(-100, 100);
			atomY = ofRandom(-100, 100);
		}
	}
	if (atomY > 0) {
		atomY++;

		if (atomY > 800) {
			atomSize = 5;
			atomX = ofRandom(-100, 100);
			atomY = ofRandom(-100, 100);
		}
	}

	if (atomSize >= 100) {
		atomSize = 5;
		atomX = ofRandom(-100, 100);
		atomY = ofRandom(-100, 100);
	}

	atomSize = atomSize + 0.1;
}

void atomGas::draw() {
	//float normalX = float(ofGetMouseX()) / ofGetWidth();
	//atom.drawFrame(normalX * atom.getNumFrames(), 200, 200);

	atom.draw(atomX,atomY,atomSize,atomSize);
}