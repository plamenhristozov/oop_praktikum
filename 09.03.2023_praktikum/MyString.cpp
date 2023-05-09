#include "MyString.h"
#include <iostream>


int MyString::length(char* str)
{
	int counter = 0;
	while (*str!='/0')
	{
		str++;
		counter++;
	}
	return counter;
	
}

char& MyString::at(unsigned indx, char& str)
{
	int counter = 0;
	while (counter != indx)
	{
		if (str == '/0')
		{
			throw std::exception("greshka");
		}
		str++;
		counter++;
	}
	return str;
}

int MyString::find(char c, unsigned startPos, char* str)
{
	int counter = 0;
	for (size_t i = 0; i < startPos; i++)
	{
		str++;
		counter++;
	}
	while (c != *str)
	{
		if (*str == '/0')
		{
			return -1;
		}
		str++;
		counter++;
	}
	return counter;
}

bool MyString::empty(char* str)
{
	if (*str == '/0')
	{
		return true;
	}
	else
	{
		return false;
	}
}

MyString MyString::substr(unsigned pos, unsigned n, char* str)
{
	char* substr = new char[n];
	if (pos > MyString::length(str))
	{
		throw std::exception("pos e mn golqm");
	}
	if (pos + n > MyString::length(str))
	{
		for (size_t i = 0; i < MyString::length(str) - pos; i++)
		{
			substr[i] = str[pos + i];
		}
	}
	else
	{
		for (size_t i = 0; i < n; i++)
		{
			substr[i] == str[pos + i];
		}
	}
	return substr;
	delete[] substr;
}
