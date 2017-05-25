#include "atomGas.h"

void atomGas::setup() {
	gasgotsound.load("gasgot.mp3");

	atom.load("gas.gif");
	atomX = ofRandom(-100, 100);
	atomY = ofRandom(-100, 100);
	atomSize = 20;
	hit = 0;
	counter = 0;
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

	if (hit <= 0)
	{
		fade = 255;
		ofSetColor(255, 255, 255, fade);
		atom.draw(atomX, atomY, atomSize, atomSize);
		ofSetColor(255, 255, 255, 255);
	}
	else
	{
		if (counter == 0)
		{
			gasgotsound.play();
			counter = 1;
		}

		fade--;
		ofSetColor(255, 255, 255, fade);
		atom.draw(atomX, atomY, atomSize, atomSize);
		ofSetColor(255, 255, 255, 255);
	}
}

void atomGas::collision(float xAt, float yAt)
{
	if (ofDist(xAt, yAt, atomX, atomY) < atomSize) {
		hit = 1;
	}

	std::cout << "Collision Gas: " << hit << endl;
}