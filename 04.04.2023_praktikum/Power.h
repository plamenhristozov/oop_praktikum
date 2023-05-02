#ifndef POWER_H
#define POWER_H
#include <string>

class Power {

	std::string name;
	int damage;

public:
	Power(const std::string& name, int damage);

	const std::string& getName() const;
	int getDamage() const;

	bool operator<(const Power& other) const;
};

#endif  // POWER_H