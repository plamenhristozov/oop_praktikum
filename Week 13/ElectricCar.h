#ifndef ELECTRIC_CAR_H

#define ELECTRIC_CAR_H
#include "Car.h"

class ElectricCar : public Car
{
public:
	void startEngine() override;
};

#endif // !ELECTRICCAR_H
