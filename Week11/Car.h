#pragma once
#include "CarPart.h"
#include "Engine.h"
#include "FuelTank.h"
#include "Piston.h"
#include "Tyre.h"
#include <string>

class Car
{
	std::string marka;
	std::string model;
	CarPart* arr;
	void displayCarParts();
};

