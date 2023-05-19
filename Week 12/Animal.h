#ifndef ANIMAL_H

#define ANIMAL_H
#include <string>
#include <vector>
#include <iostream>

enum Food
{
	Meat,
	Vegetables,
	Both
};


class Animal
{
	int weight;
	char* name;
	static int count;

public:
	virtual int eat();
	Food getFood();
	virtual ~Animal();
	Animal()
	{
		count++;
	};

};

class Mammal : public Animal
{
	char* osinovitel;
};

class Bird : public Animal
{
	std::string city;
};



template <typename AnimalType>
class ZooSector
{
	std::vector<AnimalType> animals;
	double x;
	double y;
public:
	void addAnimal();
	void printAnimals();
};

class Zoo
{
	std::string name;
	Animal* animals;


public:

};

#endif // !ANIMAL_H
