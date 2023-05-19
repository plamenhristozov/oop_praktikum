#include <iostream>

enum Food
{
	Plant,
	Meat
};


int main()
{

	Food asd = Food::Meat;
	if (asd == Food::Plant)
	{
		std::cout << "asd";
	}
}