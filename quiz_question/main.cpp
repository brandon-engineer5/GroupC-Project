#include "QuizQuestions.h"

int main()
{
    QuizQuestions(q);

    //setting a question and its options
    q.Setquestion_text("What is the capital of France?");
    q.Setoption1("Berlin");
    q.Setoption2("Madrid");
    q.Setoption3("Paris");
    q.Setoption4("Rome");
    q.Setcorrect_option(3);
    q.Setscore_value(10);

    //displaying the question and options
    cout << "Question: " << q.Getquestion_text() << endl;
    cout << "1. " << q.Getoption1() << endl;
    cout << "2. " << q.Getoption2() << endl;
    cout << "3. " << q.Getoption3() << endl;
    cout << "4. " << q.Getoption4() << endl;

    //assuming user selects option 3
    int user_answer;
    cout << "Your answer (1-4): ";
    cin >> user_answer;

    //set the user's answer
    q.Setuser_option(user_answer);

    //checking if the user is correct
    if (q.Getuser_option() == q.Getcorrect_option()) {
        cout << "Correct!" << endl;
        cout << "You scored: " << q.Getscore_value() << " points!" << endl;
    } else {
        cout << "Wrong answer. The correct answer was option " << q.Getcorrect_option() << "." << endl;
    }

    return 0;
}
