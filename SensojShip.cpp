#include "SensojShip.h"

void SensojShip::setup() 
{
	ship.load("nave.gif");
	shipCrashed.load("nave_x.png");
	shipSize = 100;
	fade = 255;
	hit = 0;
}

void SensojShip::update()
{

}

void SensojShip::draw()
{
	shipX = ofGetMouseX() - ofGetWidth() / 2;
	shipY = ofGetMouseY() - ofGetHeight() / 2;

	if (hit <= 0)
	{
		ship.draw(shipX - (shipSize / 2), shipY - (shipSize / 2), shipSize, shipSize);
	}
	else
	{
		fade--;
		ofSetColor(255, 255, 255, fade);
		shipCrashed.draw(shipX - (shipSize / 2), shipY - (shipSize / 2), shipSize, shipSize);
		ofSetColor(255, 255, 255, 255);
	}
}

void SensojShip::collision(float xShip, float yShip)
{
	if (ofDist(xShip, yShip, shipX, shipY) < 10) {
		hit = 1;
	}

}