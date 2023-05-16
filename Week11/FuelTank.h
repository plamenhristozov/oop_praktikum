#pragma once
#include "CarPart.h"
#include <string>

class FuelTank : public CarPart
{
	double obem;
	//benzin diesel gas
	std::string type;
	template <typename T>
	type(T benzin, T diesel, T gas) : benzin_(benzin), diesel_(diesel), gas_(gas) {};
};