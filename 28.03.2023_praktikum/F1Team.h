#include <string>
#include "F1Car.h"

#ifndef F1TEAM_H

#define F1TEAM_H

class F1Team
{
public:

	void writeTeam(std::ofstream &o_file, F1Car car);
	void readTeam(std::ifstream &i_file, F1Car car);

private:
	std::string name;
	F1Car cars[2];

};




#endif // !F1TEAM_H

