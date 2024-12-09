//Omar Chorbachi
//C23391521
//User Interface

#include <iostream>
#include <string>

using namespace std;

void showMainMenu();
void menuChoice(int choice);
void registerUser();
void loginUser();
void takeQuiz();
void viewLeaderboard();

int main()
{
   int choice;

   do {
        showMainMenu();
        cout << "Enter your choice! ";
        cin >> choice;

    if (cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        choice = -1;
    }

    menuChoice(choice);

   }while (choice =! 5);

   cout << "Thank you for taking our quiz!";
   return 0;
}

void showMainMenu(){
    cout << "\n===================================\n";
    cout << "          Quiz Application          \n";
    cout << "===================================\n";
    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "3. Take Quiz\n";
    cout << "4. View Leaderboard\n";
    cout << "5. Exit\n";
    cout << "===================================\n";
}

void menuChoice(int choice){
     switch (choice) {
        case 1:
            cout << "registerUser()";
            break;
        case 2:
            cout << "loginUser()";
            break;
        case 3:
            cout << "takeQuiz()";
            break;
        case 4:
            cout << "viewLeaderboard()";
            break;
        case 5:
            cout << "Exiting the application\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
    }
}

return 0;
