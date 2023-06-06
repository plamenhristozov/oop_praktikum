#ifndef BROKENDEVICE_H

#define BROKENDEVICE_H
#include "Device.h"
#include <string>

class BrokenDevice : public Device
{
	std::string symptoms;
	int minutesNecessaryToRepair;

public:
	BrokenDevice();
	BrokenDevice(const BrokenDevice& other);


};
#endif // !BROKENDEVICE_H
