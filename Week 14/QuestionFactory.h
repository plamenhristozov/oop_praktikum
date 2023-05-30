#ifndef QUESTIONFACTORY_H

#define QUESTIONFACTORY_H
#include "Question.h"

class QuestionFactory
{

public:
	Question* createQuestion();
	/*създава въпрос в динамичната памет и го връща, като данните за него прочита от стандартния вход.Първо се 
		прочита низ "YesNo" "MultipleChoice" или "Open" за да се определи какъв въпрос да се построи.Ако е въведено 
		нещо друго, метода връща nullptr.
		След това се прочитат данните необходими за конструиране на въпроса.При невалидни данни да се връща nullptr*/

};

#endif // !QUESTIONFACTORY_H
