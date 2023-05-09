#ifndef SHOE_H

#define SHOE_H
#include <string>
class Shoe
{
public:
	std::string maker;
	std::string model;
	double price;
	double rating;
	int countInWarehouse;
	Shoe();
	~Shoe();

private:

};

Shoe::Shoe()
{
}

Shoe::~Shoe()
{
}

#endif // !SHOE_H

