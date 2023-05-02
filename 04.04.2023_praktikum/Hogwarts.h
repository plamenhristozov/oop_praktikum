#ifndef HOGWARTS_H
#define HOGWARTS_H

#include <iostream>
#include <string>

#include "Power.h"
#include "Student.h"

class Hogwarts {

	Student* students;
	size_t size;
	size_t currentCount;
	size_t capacity;
	void clear();
	void copy(const Hogwarts& other);

public:
	Hogwarts();
	Hogwarts(const Hogwarts& other);
	Hogwarts(Hogwarts&& other);
	Hogwarts& operator=(const Hogwarts& other);
	Hogwarts& operator=(Hogwarts&& other);
	~Hogwarts();

	friend std::ostream& operator<<(std::ostream& out, const Hogwarts& hogwarts);

	void addStudent(const Student& student);
	void assignHouse(const std::string& studentName, const std::string& house) const;
	void givePower(const std::string& name, const Power& power) const;

	int getHouseStudentsCount(const std::string& house) const;
	Student* getFirstStudent(const std::string& house) const;
	const Student* getStudents() const;
	bool removeStudent(const std::string& name) const;
};

#endif  // HOGWARTS_H
