#ifndef CAR_H

#define CAR_H
#include "Property.h"
#include "Vehicle.h"

class Car: public Vehicle, public Property
{
	char* model;
	char* marka;

public:
	Car();
	Car(const Car& other);
	Car operator=(const Car& other);
	~Car();
	void startEngine() override;
};

#endif // !CAR_H
