#include "asteroid.h"

void asteroid::asSetup()
{
	asteroid1.load("asteroid_1.png");
	asteroid_crashed.load("asteroid_crashed.png");

	crashsound.load("crash.mp3");

	posX = ofRandom(-100, 100);
	posY = ofRandom(-100, 100);
	size = ofRandom(1, 5);
	fade = 255;
	hit = 0;
	counter = 0;
}

void asteroid::asMove()
{
	for (float i = 0; i < 3; i++)
	{
		if (posX < -30) {
			posX = posX - ofRandom(0.1, 0.5);

			if (posX < -800) {
				fade--;
				if (fade <= 0) {
					asteroid1.clear();
					hit = 0;
				}
			}
		}
		else if (posX > 30) {
			posX = posX + ofRandom(0.1, 0.5);

			if (posX > 800) {
				fade--;
				if (fade <= 0) {
					asteroid1.clear();
					hit = 0;
				}
			}
		}
		else if (posX >= -30 && posX < -10) {
			posX--;
		}
		else if (posX <= 30 && posX > 10) {
			posX++;
		}
		else {
			posX = 0;
		}

		if (posY < -30) {
			posY = posY - ofRandom(0.1, 0.5);

			if (posY < -800) {
				fade--;
				if (fade <= 0) {
					asteroid1.clear();
					hit = 0;
				}
			}
		}
		else if (posY > 30) {
			posY = posY + ofRandom(0.1, 0.5);

			if (posY > 800) {
				fade--;
				if (fade <= 0) {
					asteroid1.clear();
					hit = 0;
				}
			}
		}
		else if (posY >= -30 && posY < -10) {
			posY--;
		}
		else if (posY <= 30 && posY > 10) {
			posY++;
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

	//std::cout << "Posición X: " << posX << endl;
	//std::cout << "Posición Y: " << posY << endl;
}

void asteroid::asShape()
{
	if (hit <= 0) 
	{
		fade = 255;
		ofSetColor(255, 255, 255, fade);
		asteroid1.draw(posX, posY, size, size);
		ofSetColor(255, 255, 255, 255);
	}
	else 
	{
		if (counter == 0)
		{
			crashsound.play();
			counter = 1;
		}
		
		fade--;
		ofSetColor(255, 255, 255, fade);
		asteroid_crashed.draw(posX, posY, size, size);
		ofSetColor(255, 255, 255, 255);
	}
}

void asteroid::collision(float xAs, float yAs) 
{
	if (ofDist(xAs, yAs, posX, posY) < size) {
		hit = 1;
	}

	std::cout << "Collision Asteroid: " << hit << endl;
}