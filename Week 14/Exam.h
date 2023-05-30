#ifndef EXAM_H

#define EXAM_H
#include "QuestionFactory.h"

class Exam
{

public:
	void addFromFactory(const QuestionFactory&);
	void answer();
	void grade();
	int getPoints();
	void printQuestions();
	void removeQuestion(int index);/*
	Изтрива въпроса с номер index.Ако такъв няма, хвърля грешка. (ползвайте v.remove(v.begin() + index)и помислете за динамичната памет)*/
	/*int asd()
	{
		static int asd = 5;
		asd++;
	}*/
};

#endif // !EXAM_H
