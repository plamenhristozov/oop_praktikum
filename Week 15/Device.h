#ifndef DEVICE_H

#define DEVICE_H
#include <string>

class Device
{
	std::string model;
	std::string brand;
	double price;

public:
	Device();
	Device(const Device& other);
	Device operator=(const Device& other);
	~Device();
	Device(std::string model, std::string brand, double price);

	std::string getModel();
	std::string getBrand();
	double getPrice();
	void setModel(std::string model);
	void setBrand(std::string brand);
	void setPrice(double price);

	void print();
	Device operator>>(const Device& other);
};
#endif // !DEVICE_H
