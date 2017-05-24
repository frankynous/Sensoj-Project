#include "stars.h"

stars::stars()
{
}


stars::~stars()
{
}

void stars::setup() {
	quantity = 1000;
	posXstar.resize(quantity);
	posYstar.resize(quantity);
	sizeStar.resize(quantity);

	for (int i = 0; i < posXstar.size(); i++) {
		posXstar[i] = ofRandom(-1000,1000);
		posYstar[i] = ofRandom(-1000,1000);
		sizeStar[i] = 0.5;
	}
}

void stars::update() {
	for (float i = 0; i < quantity; i++) {
		
		if (posXstar[i] < -1) {
			posXstar[i] -= 0.1;
		}
		else if (posXstar[i] > 1) {
			posXstar[i] += 0.1;
		}
		else if (posXstar[i] > -1 && posXstar[i] < 1) {
			posXstar[i] = 0;
		}

		if (posYstar[i] < -1) {
			posYstar[i] -= 0.1;
		}
		else if (posYstar[i] > 1) {
			posYstar[i] += 0.1;
		}
		else if (posYstar[i] > -1 && posYstar[i] < 1) {
			posYstar[i] = 0;
		}

		sizeStar[i] = sizeStar[i] + 0.01;

		if (sizeStar[i] >= 3) {
			sizeStar[i] = 0.5;
			posXstar[i] = ofRandom(-1000, 1000);
			posYstar[i] = ofRandom(-1000, 1000);
		}
	}
}

void stars::draw() {
	for (int i = 0; i < quantity; i++) {
		ofColor(255);
		ofCircle(posXstar[i], posYstar[i], sizeStar[i]);
	}
}