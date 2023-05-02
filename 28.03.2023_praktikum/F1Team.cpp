#include "F1Team.h"
#include "F1Car.h"
#include <fstream>
#include <iostream>


void F1Team::readTeam(std::ifstream &i_file, F1Car car)
{
	i_file.read((char*)&car, sizeof(F1Car));
	

}


void F1Team::writeTeam(std::ofstream &o_file, F1Car car)
{
	o_file.write((char*)&car, sizeof(F1Car));

}


