#include "SensojShip.h"

void SensojShip::setup() 
{
	ship.load("nave.gif");
	shipCrashed.load("nave_x.png");
	shipSize = 100;
	fade = 255;
	crash = 0;
}

void SensojShip::update()
{
	shipX = ofGetMouseX() - ofGetWidth() / 2;
	shipY = ofGetMouseY() - ofGetHeight() / 2;
}

void SensojShip::draw()
{
	if (rock.hit <= 0)
	{
		fade = 255;
		ofSetColor(255, 255, 255, fade);
		ship.draw(shipX - (shipSize / 2), shipY - (shipSize / 2), shipSize, shipSize);
		ofSetColor(255, 255, 255, 255);
	}
	else
	{
		fade--;
		ofSetColor(255, 255, 255, fade);
		shipCrashed.draw(shipX - (shipSize / 2), shipY - (shipSize / 2), shipSize, shipSize);
		ofSetColor(255, 255, 255, 255);
	}

}