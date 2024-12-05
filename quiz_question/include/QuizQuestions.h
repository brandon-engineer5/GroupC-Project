/**
Brandon Browne - Group C
Collaborators - Ciaran McCarthy, Omar Chorbachi
Task - Quiz Logic: Implements the quiz-taking and scoring mechanics.
**/

#ifndef QUIZQUESTIONS_H
#define QUIZQUESTIONS_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class QuizQuestions {
public:
    QuizQuestions();
    virtual ~QuizQuestions();

    string Getquestion_text() { return question_text_; }
    void Setquestion_text(string val) { question_text_ = val; }

    string Getoption(int index);
    void Setoption(int index, string val);

    int Getcorrect_option() { return correct_option_; }
    void Setcorrect_option(int val) { correct_option_ = val; }

    int AskQuestion(); // Handles user interaction for this question.

private:
    string question_text_;
    vector<string> options_;
    int correct_option_;
};

class Quiz {
public:
    Quiz();
    void AddQuestion(const QuizQuestions& question);
    void StartQuiz();
    void SaveScore(const string& filename);

private:
    vector<QuizQuestions> questions_;
    int total_score_;
};

#endif // QUIZQUESTIONS_H

