#ifndef MYSTRING_H_

#define MYSTRING_H_

class MyString
{
public:
	MyString(const char* str);
	int length(char* str);
	char& at(unsigned indx, char& str);
	int find(char c, unsigned startPos, char* str);
	bool empty(char * str);
	MyString substr(unsigned pos, unsigned n, char* str);
	void append(const MyString& str);
	void print();
	
private:

};


#endif // !MYSTRING_H_

