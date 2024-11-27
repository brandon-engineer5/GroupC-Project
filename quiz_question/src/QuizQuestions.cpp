#include "QuizQuestions.h"

QuizQuestions::QuizQuestions()
{
    question_text = "";
    option1_ = "";
    option2_ = "";
    option3_ = "";
    option4_ = "";
    correct_option = 0;
    user_option = 0;
    score_value = 0;
}

QuizQuestions::~QuizQuestions()
{
    //dtor
}
