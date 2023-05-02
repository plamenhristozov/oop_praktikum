#ifndef TEAMLEADER.H

#define TEAMLEADER.H
#include "Employee.h"
#include <vector>
#include <string>

class TeamLeader: public Employee
{
private:
	std::vector<Employee> Employees;
	std::string projectName;

public:
	TeamLeader();
	TeamLeader(const std::string string, double salary, std::vector<Employee> team);
	TeamLeader(const TeamLeader& other);
	TeamLeader(TeamLeader&& other);
	~TeamLeader();
	int numberOfEmployeesInTeam();
	void setEmployees(std::vector<Employee> Employees);
	void setProjectName(std::string projectName);
	std::vector<Employee> getEmployees();
	std::string getProjectName();

};


#endif // !TEAMLEADER.H
