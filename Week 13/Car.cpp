#include "Car.h"
#include "Vehicle.h"
#include "Property.h"
#include <iostream>

Car copyFrom(const Car& other)
{

}

void free()
{

}

Car::Car() : Vehicle(), Property()
{
	this->marka = nullptr;
	this->model = nullptr;
}

Car::Car(const Car& other) : Vehicle(other), Property(other)
{
	copyFrom(other);
}

Car Car::operator=(const Car& other)
{
	if (this != &other)
	{
		Vehicle::operator=(other);
		Property::operator=(other);
		free();
		copyFrom(other);
	}
}

Car::~Car()
{
	this->marka = nullptr;
	this->model = nullptr;
}

void Car::startEngine()
{
	int count;
	count = this->getPower() / 30;
	std::cout << "Vrooo";
	for (size_t i = 0; i < count; i++)
	{
		std::cout << "o";
	}
	std::cout << "m" << std::endl;
}
