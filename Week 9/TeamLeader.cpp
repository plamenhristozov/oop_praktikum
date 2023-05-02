#include "TeamLeader.h"
#include<string>
#include<vector>

TeamLeader::TeamLeader()
{
	this->projectName = nullptr;
	//this->Employees = nullptr;
}

TeamLeader::TeamLeader(const std::string name, double salary, std::vector<Employee> team1) : Employee(name, salary), Employees(team1)
{
}

TeamLeader::TeamLeader(const TeamLeader& other)
{
	this->projectName = other.projectName;
	this->Employees = other.Employees;
}

TeamLeader::TeamLeader(TeamLeader&& other)
{
	this->projectName = other.projectName;
	this->Employees = other.Employees;
	other.projectName = nullptr;
	//other.Employees = nullptr;
}

TeamLeader::~TeamLeader()
{

	this->projectName = nullptr;
	//this->Employees = nullptr;
}

int TeamLeader::numberOfEmployeesInTeam()
{
	return Employees.size();
}

void TeamLeader::setEmployees(std::vector<Employee> Employees)
{
	this->Employees = Employees;
}

void TeamLeader::setProjectName(std::string projectName)
{
	this->projectName = projectName;
}

std::vector<Employee> TeamLeader::getEmployees()
{
	return this->Employees;
}

std::string TeamLeader::getProjectName()
{
	return this->projectName;
}
