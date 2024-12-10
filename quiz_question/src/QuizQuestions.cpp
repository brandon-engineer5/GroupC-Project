#include "QuizQuestions.h"

QuizQuestions::QuizQuestions() : correct_option_(0) {
    options_.resize(4);
}

QuizQuestions::~QuizQuestions() {}

/// gets option at specified index (1-4)
string QuizQuestions::Getoption(int index) {
    if (index >= 1 && index <= 4) return options_[index - 1];
    return "";
}

/// sets option at specified index (1-4)
void QuizQuestions::Setoption(int index, string val) {
    if (index >= 1 && index <= 4) options_[index - 1] = val;
}

/// handles asking the user each question and manages attempts
int QuizQuestions::AskQuestion() {
    cout << "Question: " << Getquestion_text() << endl;

    /// displays the 4 options
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". " << Getoption(i + 1) << endl;
    }

    int user_answer; // stores user answers
    int attempts = 0; // counts number of attempts

    /// loop until user answers correctly or uses all attempts
    while (true) {
        cout << "Your answer (1-4): ";
        cin >> user_answer;

        attempts++; // increment attempt counter

        /// check if answer is correct
        if (user_answer == Getcorrect_option()) {
            cout << "Correct!" << endl;
            return 4 - (attempts - 1); // Score decreases by 1 for each wrong attempt.
        } else {
            cout << "Wrong answer. Try again." << endl;
        }

        if (attempts == 4) { // if user has used all attempts
            cout << "You've used all attempts. The correct answer was option " << Getcorrect_option() << "." << endl;
            return 0; // return 0 for using all attempts
        }
    }
}

Quiz::Quiz() : total_score_(0) {} // initialise total score to 0

/// adds a QuizQuestions object to the list of questions
void Quiz::AddQuestion(const QuizQuestions& question) {
    questions_.push_back(question); // add question to the vector
}

/// starts quiz going through all questions and trscking score
void Quiz::StartQuiz() {

    total_score_ = 0; // reset total score to 0

    /// loop through each question in the quiz
    for (size_t i = 0; i < questions_.size(); ++i) {
        cout << "\nQuestion " << i + 1 << "/" << questions_.size() << ":\n";
        total_score_ += questions_[i].AskQuestion(); // ask the question and add the score
    }

    /// disp total score at the end of the quiz
    cout << "\nYour total score: " << total_score_ << "/40" << endl;
}


int Quiz::SaveScore(){
    return total_score_;
}

