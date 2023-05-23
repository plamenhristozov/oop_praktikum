#ifndef VEHICLE_H

#define VEHICLE_H

class Vehicle
{
	int power;
	int weight;

public:
	int getPower();
	int getWeight();
	virtual void startEngine() = 0;
};


#endif // !VEHICLE_H
