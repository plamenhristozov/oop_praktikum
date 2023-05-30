﻿#ifndef OPENQUESTION_H

#define OPENQUESTION_H
#include "Question.h"

class OpenQuestion : public virtual Question
{
	/*който описва въпрос със свободен текст.При конструиране се задават текст и брой точки.
		При задаване на въпроса се извеждат тескта и точките и се очаква студента да въведе свободен текст.
		При оценяване се извеждат въпроса и отговора на студента и проверяващия въвежда оценка 
		в проценти.Ако отговор не е даден, въпросът автоматично се оценява с 0т.*/
};
#endif // !OPENQUESTION_H
