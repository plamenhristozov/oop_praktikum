#include "Employee.h"
#include <vector>
#include <iostream>

Employee::Employee()
{
	this->name = nullptr;
	this->salary = 0;
}

Employee::Employee(std::string name, double salary)
{
	this->name = name;
	this->salary = salary;
}

Employee::Employee(const Employee& other)
{
	this->name = other.name;
	this->salary = other.salary;
}

Employee::Employee(Employee&& other)
{
	this->name = other.name;
	this->salary = other.salary;
	other.name = nullptr;
	other.salary = 0;
}

Employee::~Employee()
{
	this->name = nullptr;
	this->salary = 0;
}

void Employee::setName(std::string name)
{
	this->name = name;
}

void Employee::setSalary(int salary)
{
	this->salary = salary;
}

const std::string Employee::getName()
{
	return this->name;
}

const int Employee::getSalary()
{
	return this->salary;
}


Employee Employee::operator<<(Employee& other)
{
	std::cout << other.name << other.salary;
}
