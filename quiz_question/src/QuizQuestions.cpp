#include "QuizQuestions.h"

QuizQuestions::QuizQuestions() : correct_option_(0) {
    options_.resize(4);
}

QuizQuestions::~QuizQuestions() {}

string QuizQuestions::Getoption(int index) {
    if (index >= 1 && index <= 4) return options_[index - 1];
    return "";
}

void QuizQuestions::Setoption(int index, string val) {
    if (index >= 1 && index <= 4) options_[index - 1] = val;
}

int QuizQuestions::AskQuestion() {
    cout << "Question: " << Getquestion_text() << endl;
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". " << Getoption(i + 1) << endl;
    }

    int user_answer;
    int attempts = 0;

    while (true) {
        cout << "Your answer (1-4): ";
        cin >> user_answer;

        attempts++;
        if (user_answer == Getcorrect_option()) {
            cout << "Correct!" << endl;
            return 4 - (attempts - 1); // Score decreases by 1 for each wrong attempt.
        } else {
            cout << "Wrong answer. Try again." << endl;
        }

        if (attempts == 4) {
            cout << "You've used all attempts. The correct answer was option " << Getcorrect_option() << "." << endl;
            return 0;
        }
    }
}

Quiz::Quiz() : total_score_(0) {}

void Quiz::AddQuestion(const QuizQuestions& question) {
    questions_.push_back(question);
}

void Quiz::StartQuiz() {
    total_score_ = 0;

    for (size_t i = 0; i < questions_.size(); ++i) {
        cout << "\nQuestion " << i + 1 << "/" << questions_.size() << ":\n";
        total_score_ += questions_[i].AskQuestion();
    }

    cout << "\nYour total score: " << total_score_ << "/40" << endl;
}

void Quiz::SaveScore(const string& filename) {
    ofstream file(filename);
    if (file.is_open()) {
        file << "Your score: " << total_score_ << "/40" << endl;
        file.close();
        cout << "Score saved to " << filename << endl;
    } else {
        cerr << "Error: Could not open file " << filename << endl;
    }
}
