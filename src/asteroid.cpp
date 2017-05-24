#include "asteroid.h"

void asteroid::asSetup()
{
	asteroid1.load("asteroid_1.png");
	asteroid2.load("asteroid_2.png");
	asteroid3.load("asteroid_3.png");

		posX = ofRandom(-100, 100);
		posY = ofRandom(-100, 100);
		size = ofRandom(1, 5);
}

void asteroid::asShape()
{
	asteroid1.draw(posX, posY, size, size);
	asteroid2.draw(posX, posY, size, size);
	asteroid3.draw(posX, posY, size, size);
}

void asteroid::asMove()
{
	for (float i = 0; i < 3; i++)
	{
		if (posX < -30) {
			posX = posX - ofRandom(0.1, 0.5);

			if (posX < -800) {
				size = ofRandom(1, 5);
				posX = ofRandom(-100, 100);
				posY = ofRandom(-100, 100);
			}
		}
		else if (posX > 30) {
			posX = posX + ofRandom(0.1, 0.5);

			if (posX > 800) {
				size = ofRandom(1, 5);
				posX = ofRandom(-100, 100);
				posY = ofRandom(-100, 100);
			}
		}
		else if (posX >= -30 && posX < -10) {
			(posX--) / 2;
		}
		else if (posX <= 30 && posX > 10) {
			(posX++) / 2;
		}
		else {
			posX = 0;
		}

		if (posY < -30) {
			posY = posY - ofRandom(0.1, 0.5);

			if (posY < -800) {
				size = ofRandom(1, 5);
				posX = ofRandom(-100, 100);
				posY = ofRandom(-100, 100);
			}
		}
		else if (posY > 30) {
			posY = posY + ofRandom(0.1, 0.5);

			if (posY > 800) {
				size = ofRandom(1, 5);
				posX = ofRandom(-100, 100);
				posY = ofRandom(-100, 100);
			}
		}
		else if (posY >= -30 && posY < -10) {
			(posY--) / 2;
		}
		else if (posY <= 30 && posY > 10) {
			(posY++) / 2;
		}
		else {
			posY = 0;
		}

		if (size >= 100) {
			size = ofRandom(1, 5);
			posX = ofRandom(-100, 100);
			posY = ofRandom(-100, 100);
		}

		size = size + 0.1;
	}
	//ofSleepMillis(1);

	//std::cout << "Posición X: " << posX << endl;
	//std::cout << "Posición Y: " << posY << endl;
}