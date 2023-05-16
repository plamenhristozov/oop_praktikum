#pragma once
#include <iostream>
#include <string>


class CarPart
{
public:
	std::string name;
	std::string manufacturer;
	int year;
	int id;
	static int count;


	static int getCarPartsCount();
	virtual void display() = 0
	{
		std::cout << id << std::endl;
	}

	CarPart(std::string name, std::string manufacturer, int year);
	void displayBase() const;
private:

};

int CarPart::getCarPartsCount()
{
	return count;
}
int CarPart::count = 1000;