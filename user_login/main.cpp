//Ciarán McCarthy
//C23325843
//26/11/2024
//Multi User Quiz Application
#include <iostream>
#include <fstream>
using namespace std;

void loadUsers();
void registerUser();
void saveUsers();
bool loginUser();
const int MAX_USERS = 100; // Assume no more than 100 users will be needed
string usernames[MAX_USERS]; // Establish array for usernames
string passwords[MAX_USERS]; // Establish array passwords
int scores[MAX_USERS] = {0}; // Establish array for scores
int userCount = 0; // Current number of registered users
string currentUser; // Establish variable of current user to keep track of whos currently logged in


int main()
{
    loadUsers();
    string choice;
    cout << "1. Login\n2. Register\n3. Logout" <<endl;
    cin>>choice;
    while (choice != "3"){
    if (choice=="1")
        loginUser();
    if (choice=="2")
        registerUser();
    if (choice=="3"){
        currentUser = "";
        cout << "Logged out successfully" << endl;
    }
    cout << "1. Login\n2. Register\n3. Logout" <<endl;
    cin>>choice;
    }
    return 0;
}

void loadUsers() {
    ifstream file("users.txt"); // Open "users.txt" for reading

    if (file.is_open()) { // If file is successfully opened
        userCount = 0;   // Reset the user count

        while (file >> usernames[userCount] >> passwords[userCount] >> scores[userCount]) {
            // While file has more data and userCount is less tha MAX_USERS
            ++userCount; // Increment userCount by 1

            if (userCount >= MAX_USERS) {
                // IF userCount >= MAX_USERS THEN
                cout << "Maximum user limit reached while loading data.\n";
                break; // EXIT the loop
            }
        }

        file.close(); // CLOSE the file
}
}




void registerUser(){
    string username;
    string password;
    cout << "Enter username: ";
    cin >> username;
    for (int i = 0; i < userCount; ++i) {
        if (usernames[i] == username) {
            cout << "User already exists!\n";
            return;
        }
    }

    if (userCount >= MAX_USERS) {
        cout << "User limit reached! Cannot register more users.\n";
        return;
    }

    cout << "Enter password: ";
    cin >> password;

    // Add the new user to the arrays
    usernames[userCount] = username;
    passwords[userCount] = password;
    scores[userCount] = 0; // Initialize score
    ++userCount;

    saveUsers();
    cout << "Registration successful!\n";
}

void saveUsers() {
    ofstream file("users.txt");

    if (file.is_open()) {
        for (int i = 0; i < userCount; ++i) {
            file << usernames[i] << " " << passwords[i] << " " << scores[i] << "\n";
        }
        file.close();
        cout << "User data saved successfully.\n";
    } else {
        cout << "Could not open users.txt for writing.\n";
    }
}

bool loginUser(){
    string username;
    string password;
    cout << "Enter username: ";
    cin >> username;
    cout << endl << "Enter password: ";
    cin >> password;
    for (int i = 0; i < userCount; ++i) {
        if ((usernames[i] == username) && (passwords[i] == password)){
            currentUser = usernames[i];
            cout << "Welcome " << usernames[i] << endl;
            return true;
        }
    }
    cout << "Incorrect username or password" << endl;
    return false;
}

