#include "Manager.h"

Manager::Manager()
{
	//this->TeamLeaders = nullptr;
}

Manager::Manager(std::vector<TeamLeader> TeamLeaders)
{
	this->TeamLeaders = TeamLeaders;
}

Manager Manager::operator<<(Manager& other)
{
	return other.TeamLeaders;
}

double Manager::printExpences()
{
	for (size_t i = 0; i < ; i++)
	{

	}
}

Manager::~Manager()
{
	//this->TeamLeaders = nullptr;
}
