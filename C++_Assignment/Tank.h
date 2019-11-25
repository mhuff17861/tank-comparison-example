//Micah Huff
//Programming Project 6

#ifndef TANK_H
#define TANK_H

class Tank
{
	private:
		
		int id;
		float speed;
		int ammo;
	
	public:
		
		//mutators
		void setID(int y);
		void setSpeed(float f);
		void setAmmo(int y);
		float increaseSpeed();
		float decreaseSpeed();
		int fire();
		int reload();
		
		//accessors
		int getID(){return id;}
		float getSpeed(){return speed;}
		int getAmmo(){return ammo;}
		
		//constructors
		Tank();
		Tank(int i, float sp, int am);
		
};

#endif


