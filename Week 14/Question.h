#ifndef QUESTION_H

#define QUESTION_H
#include <string>

class Question
{
	const std::string YES = "yes";
	const std::string NO = "no";

public:
	void ask();
	int grade();
	void print();
	bool validYesNoAnswer(const std::string& ans);
	bool correctYesNoAnswer(const std::string& ans, bool correct_is_yes);
	virtual ~Question();
};

#endif // !QUESTION_H
