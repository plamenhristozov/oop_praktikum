#ifndef PROPERTY_H

#define PROPERTY_H
#include <string>

class Property
{
	std::string owner;
	bool tangible;
public:
	std::string getOwner();
	bool getTangible();
};

#endif // !PROPERTY_H
