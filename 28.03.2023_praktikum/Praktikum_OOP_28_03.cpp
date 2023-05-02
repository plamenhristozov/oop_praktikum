#include "F1Team.h"
#include "F1Car.h"
#include <iostream>
#include <fstream>


int main()
{
	std::ofstream o_file("C:/Users/Icezu/Desktop/text.txt", std::ios::binary);
	if (!o_file.is_open())
	{
		std::cout << "Error opening file";
		return 1;
	}
	std::ifstream i_file("C:/Users/Icezu/Desktop/text.txt", std::ios::binary);
	if (!i_file.is_open())
	{
		std::cout << "Error opening file";
		return 2;
	}

	F1Car car = { "Porsche", 1998, 99, 2.3 };
	F1Team team;
	team.readTeam(i_file, car);
	team.writeTeam(o_file, car);
	
	/*o_file.write((char*)&car, sizeof(F1Car));
	i_file.read((char*)&car, sizeof(F1Car));*/

	o_file.close();
	i_file.close();
}