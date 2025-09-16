/*
Juan Velasco
Sept 15, 2025
lab 6, nested conditional statement and switch
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\n --- Example 1: nested condition ----" << endl;
    int n = 5;

    if (n > 0) {
        if (n % 2 == 0) {
            cout << "The number is POSITIVE and EVEN" << endl;
        } else {
            cout << "The number is POSITIVE and ODD" << endl;
        }
    } else if (n < 0) {
        if (n % 2 == 0) {
            cout << "The number is NEGATIVE and EVEN" << endl;
        } else {
            cout << "The number is NEGATIVE and ODD" << endl;
        }
    } else {
        cout << "The number is ZERO" << endl;
    }

    cout << "\n --- Example 2: organize three numbers in decreasing order ----" << endl;
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // sort so: num1 >= num2 >= num3
    if (num1 < num2) swap(num1, num2);
    if (num1 < num3) swap(num1, num3);
    if (num2 < num3) swap(num2, num3);

    cout << "Decreasing order: " << num1 << "\t" << num2 << "\t" << num3 << endl;

    cout << "\n --- Example 3: switch (day-off) ----" << endl;
    int dayoff;
    cout << "Select a day-off:\n";
    cout << "1 for Monday\n2 for Tuesday\n3 for Wednesday\n4 for Thursday\n5 for Friday\n";
    cin >> dayoff;

    switch (dayoff) {
        case 1: cout << "You are off on Monday" << endl; break;
        case 2: cout << "You are off on Tuesday" << endl; break;
        case 3: cout << "You are off on Wednesday" << endl; break;
        case 4: cout << "You are off on Thursday" << endl; break;
        case 5: cout << "You are off on Friday" << endl; break;
        default: cout << "Unable to read the day-off" << endl; break;
    }

    cout << "\n --- Example 4: switch to select a gender ---" << endl;
    char gender;
    cout << "Select a gender (m/M = Male, f/F = Female, o/O = Others): ";
    cin >> gender;

    switch (gender) {
        case 'm': case 'M': cout << "Gender = MALE" << endl; break;
        case 'f': case 'F': cout << "Gender = FEMALE" << endl; break;
        case 'o': case 'O': cout << "Gender = OTHERS" << endl; break;
        default:            cout << "Gender = UNDEFINED" << endl; break;
    }

    cout << "\n --- EXERCISE 1: Housing by savings ---" << endl;
    double savings;
    cout << "Enter the amount of money you have saved: ";
    cin >> savings;

    if (savings < 0) {
        cout << "With $" << savings << " you are in debt. Keep saving!" << endl;
    } else if (savings > 0 && savings < 200000) {
        cout << "With $" << savings << " you need to keep saving!" << endl;
    } else if (savings <= 500000) {
        cout << "With $" << savings << " you can afford an Apartment or Co-op" << endl;
        if (savings < 300000)       cout << "Type: Studio" << endl;
        else if (savings < 400000)  cout << "Type: 1 Bedroom + 1 Bath" << endl;
        else                        cout << "Type: 2 Bedrooms + 1 Bath" << endl;
    } else if (savings <= 1000000) {
        cout << "With $" << savings << " you can afford a House" << endl;
        if (savings < 700000)       cout << "Type: 2 Bedrooms + 2 Baths" << endl;
        else                        cout << "Type: 3 Bedrooms + 3 Baths" << endl;
    } else {
        cout << "With $" << savings << " you can afford a Mansion" << endl;
    }

    cout << "\n --- EXERCISE 2: Switch-Case Double Number ---" << endl;
    int number;
    char choice;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Do you want to double the number? (Y/N): ";
    cin >> choice;

    switch (choice) {
        case 'Y': case 'y': number = number * 2; break;
        case 'N': case 'n': /* keep the same */   break;
        default:             number = 0;          break;
    }

    cout << "The number is set to " << number << endl;

    return 0;
}
