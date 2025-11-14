#include <iostream>
using namespace std;

int main() {
    cout << "===== IF / ELSE BASICS =====\n";

    int age;
    cout << "Enter your age: ";
    cin >> age; // read user input

    if (age >= 18) {
        cout << "You are an adult.\n";
    } else {
        cout << "You are a minor.\n";
    }

    cout << "\n===== ELSE IF CHAIN =====\n";

    int score;
    cout << "Enter a score between 0 and 100: ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A\n";
    } else if (score >= 80) {
        cout << "Grade: B\n";
    } else if (score >= 70) {
        cout << "Grade: C\n";
    } else if (score >= 60) {
        cout << "Grade: D\n";
    } else {
        cout << "Grade: F\n";
    }

    cout << "\n===== NESTED CONDITIONS =====\n";

    bool has_id;
    cout << "Do you have your id (bool): ";
    cin >> has_id; // read user input
    int age2;
    cout << "Enter your age: ";
    cin >> age2;

    if (has_id) {
        cout << "ID is valid.\n";
        if (age2 >= 18) {
            cout << "Entry allowed.\n";
        } else {
            cout << "Entry denied: under 18.\n";
        }
    } else {
        cout << "No ID → entry denied.\n";
    }

    cout << "\n===== SWITCH STATEMENT =====\n";

    int day;
    cout << "Enter a number 1–7: ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday\n";
            break;
        case 2: cout << "Tuesday\n";
            break;
        case 3: cout << "Wednesday\n";
            break;
        case 4: cout << "Thursday\n";
            break;
        case 5: cout << "Friday\n";
            break;
        case 6: cout << "Saturday\n";
            break;
        case 7: cout << "Sunday\n";
            break;
        default: cout << "Invalid day (must be 1–7)\n";
    }

    return 0;
}
