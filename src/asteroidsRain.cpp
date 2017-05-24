#include "asteroidsRain.h"

void asteroidsRain::rainSetup()
{
	for (float i = 0; i < 10; i++)
	{
		asteroids.push_back(asteroid());
		asteroids[i].asSetup();
	}
}

void asteroidsRain::rainUpdate()
{
	for (float i = 0; i < 10; i++)
	{
		asteroids.push_back(asteroid());
		asteroids[i].asMove();
	}
}

void asteroidsRain::rainDraw()
{
	for (float i = 0; i < 10; i++)
	{
		asteroids.push_back(asteroid());
		asteroids[i].asShape();
	}	
	return;
}

void asteroidsRain::collision(float xRain, float yRain)
{
	for (int i = 0; i<10; i++) {
		asteroids[i].collision(xRain, yRain);
	}
}