#include "QuizQuestions.h"

int main() {
    Quiz quiz;

    QuizQuestions q1;
    q1.Setquestion_text("What is the capital of France?"); // set question text
    q1.Setoption(1, "Berlin"); // set option 1
    q1.Setoption(2, "Madrid"); // set option 2
    q1.Setoption(3, "Paris"); // set option 3
    q1.Setoption(4, "Rome"); // set option 4
    q1.Setcorrect_option(3); // mark correct answer. in this case no. 3
    quiz.AddQuestion(q1); // add this question to the quiz

    QuizQuestions q2; // follows the same structure as commented above
    q2.Setquestion_text("What sort of animal is Walt Disney's 'Dumbo'?");
    q2.Setoption(1, "Giraffe");
    q2.Setoption(2, "Dog");
    q2.Setoption(3, "Tiger");
    q2.Setoption(4, "Elephant");
    q2.Setcorrect_option(4);
    quiz.AddQuestion(q2);

    QuizQuestions q3;
    q3.Setquestion_text("What is 2 x 4 + (5 x 4)?");
    q3.Setoption(1, "52");
    q3.Setoption(2, "48");
    q3.Setoption(3, "28");
    q3.Setoption(4, "15");
    q3.Setcorrect_option(3);
    quiz.AddQuestion(q3);

    QuizQuestions q4;
    q4.Setquestion_text("What country did King William of Orange come from?");
    q4.Setoption(1, "England");
    q4.Setoption(2, "Netherlands");
    q4.Setoption(3, "Germany");
    q4.Setoption(4, "Wales");
    q4.Setcorrect_option(2);
    quiz.AddQuestion(q4);

    QuizQuestions q5;
    q5.Setquestion_text("Who was the narrator of the original 'Thomas the Tank Engine'?");
    q5.Setoption(1, "John Lennon");
    q5.Setoption(2, "Paul McCartney");
    q5.Setoption(3, "George Harrison");
    q5.Setoption(4, "Ringo Starr");
    q5.Setcorrect_option(4);
    quiz.AddQuestion(q5);

    QuizQuestions q6;
    q6.Setquestion_text("Which country was not considered an 'Axis Power'?");
    q6.Setoption(1, "Japan");
    q6.Setoption(2, "Korea");
    q6.Setoption(3, "Italy");
    q6.Setoption(4, "Germany");
    q6.Setcorrect_option(2);
    quiz.AddQuestion(q6);

    QuizQuestions q7;
    q7.Setquestion_text("What comes next? 2, 6, 12, 20, 30 ...");
    q7.Setoption(1, "42");
    q7.Setoption(2, "44");
    q7.Setoption(3, "52");
    q7.Setoption(4, "56");
    q7.Setcorrect_option(1);
    quiz.AddQuestion(q7);

    QuizQuestions q8;
    q8.Setquestion_text("What county housed the High King of Ireland?");
    q8.Setoption(1, "Dublin");
    q8.Setoption(2, "Wicklow");
    q8.Setoption(3, "Wexford");
    q8.Setoption(4, "Meath");
    q8.Setcorrect_option(4);
    quiz.AddQuestion(q8);

    QuizQuestions q9;
    q9.Setquestion_text("Which was the main artist associated with the Sistine Chapel?");
    q9.Setoption(1, "Leonardo Da Vinci");
    q9.Setoption(2, "Raphael");
    q9.Setoption(3, "Donnatello");
    q9.Setoption(4, "Michaelangelo");
    q9.Setcorrect_option(4);
    quiz.AddQuestion(q9);

    QuizQuestions q10;
    q10.Setquestion_text("What is the correct answer to this question?");
    q10.Setoption(1, "None of the below");
    q10.Setoption(2, "All of the below");
    q10.Setoption(3, "One of the above");
    q10.Setoption(4, "All of the above");
    q10.Setcorrect_option(3);
    quiz.AddQuestion(q10);

    quiz.StartQuiz(); // starts quiz for the user
    quiz.SaveScore("quiz_score.txt"); // save quiz score to a text file

    return 0;
}
