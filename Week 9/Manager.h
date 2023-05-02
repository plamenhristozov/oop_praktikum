#ifndef MANAGER.H

#define MANAGER.H
#include "Employee.h"
#include <vector>
#include "TeamLeader.h"

class Manager: public Employee
{
private:
	std::vector<TeamLeader> TeamLeaders;
public:
	Manager();
	Manager(std::vector<TeamLeader> TeamLeaders);
	Manager operator<<(Manager& other);
	double printExpences();
	~Manager();

};



#endif // !MANAGER.H
