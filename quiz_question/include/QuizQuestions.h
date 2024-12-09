/**
Brandon Browne - Group C
Collaborators - Ciaran McCarthy, Omar Chorbachi
Task - Quiz Logic: Implements the quiz-taking and scoring mechanics.
**/

#ifndef QUIZQUESTIONS_H
#define QUIZQUESTIONS_H
#include <iostream>
#include <string>
#include <ostream>
#include <vector>
#include <fstream> // for file operations / saving score

using namespace std;

class QuizQuestions {
public:
    QuizQuestions(); // constructor
    virtual ~QuizQuestions(); // virtual destructor

    string Getquestion_text() { return question_text_; }
    void Setquestion_text(string val) { question_text_ = val; }

    string Getoption(int index);
    void Setoption(int index, string val);

    int Getcorrect_option() { return correct_option_; }
    void Setcorrect_option(int val) { correct_option_ = val; }

    int AskQuestion(); // Handles user interaction for this question.

private:
    string question_text_;      // holds text of the question
    vector<string> options_;    // stores options for question
    int correct_option_;        // index of the correct option
};

class Quiz {
public:
    Quiz(); // constructor
    void AddQuestion(const QuizQuestions& question); // add questions
    void StartQuiz(); // starts quiz and presents each question to the user
    void SaveScore(const string& filename); // saves the score in a .txt file
    //int SaveScore();
private:
    vector<QuizQuestions> questions_; // holds all quiz question in a dynamic array
    int total_score_; // tracks the user score
};

#endif // QUIZQUESTIONS_H

