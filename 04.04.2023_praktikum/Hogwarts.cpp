#include "Hogwarts.h"


void Hogwarts::clear()
{
	delete[] students;
	students = nullptr;
	currentCount = 0;
	capacity = 0;
}

void Hogwarts::copy(const Hogwarts& other)
{
	currentCount = other.currentCount;
	capacity - other.capacity;
	this->students = new Student[capacity];
	for (size_t i = 0; i < currentCount; i++)
	{
		students[i] = other.students[i];
	}
}

Hogwarts::Hogwarts()
	:students(nullptr), currentCount(0), capacity(0)
{
}

Hogwarts::Hogwarts(const Hogwarts& other)
{
}

Hogwarts::Hogwarts(Hogwarts&& other)
{
	students = other.students;
	this->capacity = other.capacity;
	this->currentCount = other.currentCount;
	other.students = nullptr;
	other.currentCount = 0;
	other.capacity = 0;
}

Hogwarts& Hogwarts::operator=(const Hogwarts& other)
{
	if (this != &other)
	{
		this->clear();
		this->copy(other);
	}
	return *this;
}

Hogwarts& Hogwarts::operator=(Hogwarts&& other)
{
	if (this != &other)
	{
		clear();
		students = other.students;
		this->capacity = other.capacity;
		this->currentCount = other.currentCount;
		other.students = nullptr;
		other.currentCount = 0;
		other.capacity = 0;
	}
	return *this;
}

Hogwarts::~Hogwarts()
{
	clear();
}

void Hogwarts::addStudent(const Student& student)
{
	if (capacity == currentCount + 1)
	{
		if (capacity != 0)
		{
			capacity *= 2;
		}
		else
		{
			capacity = 2;
		}
	}
}

std::ostream& operator<<(std::ostream& out, const Hogwarts& hogwarts)
{
	for (size_t i = 0; i < hogwarts.currentCount; i++)
	{
		out << hogwarts.students[i].getName() << "from: " << hogwarts.students[i].getHouse();
	}
	return out;
}
