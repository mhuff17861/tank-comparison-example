//Micah Huff
//Programming Project 6

#include "Tank.h"

/**************************Constructors*******************/

Tank::Tank()
{
	id = 0;
	speed = 0;
	ammo = 0;
}

Tank::Tank(int i, float sp, int am)
{
	setID(i);
	setSpeed(sp);
	setAmmo(am);
}

/*************************Mutators**************************/

void Tank::setID(int y)
{
	if (y >= 0 && y <= 50)
	{
		id = y;
	}
	else
		throw "ID must be between 0 and 50";
}

void Tank::setSpeed(float f)
{
	if (f >= 0 && f <= 60)
	{
		speed = f;
	}
	else
		throw "Speed must be between 0 and 60";
}

void Tank::setAmmo(int y)
{
	if (y >= 0 && y <= 40)
	{
		ammo = y;
	}
	else
		throw "Ammo must be between 0 and 40";
}

float Tank::increaseSpeed()
{
	float test = speed + 5;
	
	if (test <= 60)
	speed = test;
	
	return speed;
}

float Tank::decreaseSpeed()
{
	float test = speed - 5;
	
	if (test >= 0)
	speed = test;
	
	return speed;
}

int Tank::fire()
{
	int test = ammo - 1;
	
	if (test >= 0)
	ammo = test;
	
	return ammo;
}

int Tank::reload()
{
	int test = ammo + 5;
	
	if (test <= 40)
	ammo = test;
	
	return ammo;
}







