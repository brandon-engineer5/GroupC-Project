/**
Brandon Browne - Group C
Collaborators - Ciaran McCarthy, Omar Chorbachi
Task - Quiz Logic: Implements the quiz-taking and scoring mechanics.
**/

#ifndef QUIZQUESTIONS_H
#define QUIZQUESTIONS_H
#include <iostream>
#include <string>

using namespace std;

class QuizQuestions
{
    public:
        QuizQuestions();
        virtual ~QuizQuestions();

        string Getquestion_text() { return question_text; }
        void Setquestion_text(string val) { question_text = val; }

        string Getoption1() { return option1_; }
        void Setoption1(string val) { option1_ = val; }

        string Getoption2() { return option2_; }
        void Setoption2(string val) { option2_ = val; }

        string Getoption3() { return option3_; }
        void Setoption3(string val) { option3_ = val; }

        string Getoption4() { return option4_; }
        void Setoption4(string val) { option4_ = val; }

        int Getcorrect_option() { return correct_option; }
        void Setcorrect_option(int val) { correct_option = val; }

        int Getuser_option() { return user_option; }
        void Setuser_option(int val) { user_option = val; }

        int Getscore_value() { return score_value; }
        void Setscore_value(int val) { score_value = val; }

    protected:

    private:
        string question_text;
        string option1_;
        string option2_;
        string option3_;
        string option4_;
        int correct_option;
        int user_option;
        int score_value;
};

#endif // QUIZQUESTIONS_H
