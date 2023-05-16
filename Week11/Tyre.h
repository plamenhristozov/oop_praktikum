#pragma once
#include "CarPart.h"

class Tyre : public CarPart
{
protected:
	double width;
	int profile;
	double diameter;

public:
	Tyre(double width, int profile, int diameter,
		std::string name, std::string manufacturer, int year)
		:CarPart(name, manufacturer, year), width(width), profile(profile), diameter(diameter)
	{};
	void display() public override;
};
