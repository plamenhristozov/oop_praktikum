#pragma once
#include <vector>
#include "CarPart.h"
#include "Piston.h"

class Engine : public CarPart
{
public:
	double power;
	std::vector<Piston> arrOfPistons;
	Engine(double power, std::vector<Piston> arrOfPistons, std::string name, std::string manufacturer, int year)
		: CarPart(name, manufacturer, year), power(power), arrOfPistons(arrOfPistons)
	{}
	void display() const override;
};