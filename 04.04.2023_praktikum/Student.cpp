#include "Student.h"
#include "Power.h"

const std::string& Student::getName() const
{
	return this->name;
}


const std::string& Student::getHouse() const
{
	return this->house;
}

void Student::setHouse(const std::string& house)
{
	this->house = house;
}

void Student::takeDamage(int damage)
{
	this->health -= damage;
}

void Student::setPower(const Power* power)
{
	this->power = power;
}

int Student::getHealth() const
{
	return this->health;
}

const Power* Student::getPower() const
{
	return this->power;
}

bool Student::isAlive() const
{
	if (this->health > 0)
	{
		return true;
	}
	else return false;
}

int Student::attack() const
{
	const Power* power = this->getPower();
	return power->getDamage();
}

Student::Student()
	:name(""), health(100), power(nullptr), house("")
{
	
}

Student::Student(const std::string& name)
	:name(name), health(100), power(nullptr), house("")
{

}