#ifndef EMPLOYEE.H

#define EMPLOYEE.H

#include <string>

class Employee
{
private:
	std::string name;
	double salary;

public:
	Employee();
	Employee(std::string name, double salary);
	Employee(const Employee& other);
	Employee(Employee&& other);
	~Employee();
	void setName(std::string name);
	void setSalary(int salary);
	const std::string getName();
	const int getSalary();
	Employee operator<<(Employee& other);
};


#endif // !EMPLOYEE.H
