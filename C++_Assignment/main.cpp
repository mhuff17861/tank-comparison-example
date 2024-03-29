/**************************PreProcessor*********************/

#include "Tank.h"
#include <iostream>
using namespace std;

/****************************Prototypes***********************/


void outputTankInfo(Tank t);

/**************************Main*******************************/

int main()
{
	int id, ammo, count;
	float speed;

	try
	{
		cout << "Enter the first tank's' ID (0-50): \n";
		cin >> id;
		cout << "Enter the first tank's' speed (0-60): \n";
		cin >> speed;
		cout << "Enter the first tank's' ammo (0-40): \n";
		cin >> ammo;

		Tank one;

		one.setID(id);
		one.setAmmo(ammo);
		one.setSpeed(speed);

		cout << "Enter the second tank's' ID (0-50): \n";
		cin >> id;
		cout << "Enter the second tank's' speed (0-60): \n";
		cin >> speed;
		cout << "Enter the second tank's' ammo (0-40): \n";
		cin >> ammo;

		Tank two(id, speed, ammo);

		outputTankInfo(one);
		outputTankInfo(two);
		cout << endl;

		cout << "Increasing Speed\n";
		one.increaseSpeed();
		two.increaseSpeed();

		outputTankInfo(one);
		outputTankInfo(two);
		cout << endl;

		cout << "Decreasing Speed\n";
		one.decreaseSpeed();
		two.decreaseSpeed();

		outputTankInfo(one);
		outputTankInfo(two);
		cout << endl;

		do
		{
		    cout << "How many times would you like to fire? (1-25)\n";
		    cin >> count;
		} while (count < 1 || count > 25);

		cout << "Firing\n";
		for (int i=0;i<count;i++)
		{
			one.fire();
			two.fire();
	    }

	    outputTankInfo(one);
		outputTankInfo(two);
		cout << endl;

		cout << "Reloading\n";
		one.reload();
		two.reload();

		outputTankInfo(one);
		outputTankInfo(two);

	} catch (const char* st)
	{
		cout << st << endl;
	}

	cout << "Press enter to continue...\n";
	cin.ignore();
	cin.get();

	return 0;
}

/***************************function definitions**************************/


void outputTankInfo(Tank t)
{
	cout << "Tank ID: " << t.getID() << endl;
	cout << "Tank Speed: " << t.getSpeed() << endl;
	cout << "Tank Ammo: " << t.getAmmo() << endl;
}

