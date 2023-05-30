#ifndef YESNOQUESTION_H

#define YESNOQUESTION_H
#include <string>
#include "Question.h"

class YesNoQuestion : public virtual Question
{


public :
	YesNoQuestion(const std::string& question, int points, const std::string& ans);
	// 0 tochki pri greshen max pri pravilen
	// trqbva da se otgovori s yes ili no
};

#endif // !YESNOQUESTION_H
