#include <string>

#ifndef F1CAR_H

#define F1CAR_H


class F1Car
{
public:	
	F1Car() = default;

	F1Car(std::string name, unsigned year, unsigned wins, float engineCapacity)
	{
		name = "Porsche";
		year = 1998;
		wins = 10;
		engineCapacity = 2.0;
	}
private:
	std::string name;
	unsigned year;
	unsigned wins;
	float engineCapacity;

};



#endif // !F1CAR_H
