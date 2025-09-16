/*
Juan Velasco
Sept 15, 2025
lab 6, nested conditional statement and switch
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    // ---------------- Example 1 ----------------
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

    // ---------------- Example 2 ----------------
    cout << "\n --- Example 2: organize three numbers in decreasing order ----" << endl;
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // sort manually with a temp variable so num1 >= num2 >= num3
    int temp;
    if (num1 < num2) { temp = num1; num1 = num2; num2 = temp; }
    if (num1 < num3) { temp = num1; num1 = num3; num3 = temp; }
    if (num2 < num3) { temp = num2; num2 = num3; num3 = temp; }

    cout << "Decreasing order: " << num1 << "\t" << num2 << "\t" << num3 << endl;

    // ---------------- Example 3 ----------------
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

    // ---------------- Example 4 ----------------
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

    // ================= Exercise 1 =================
    cout << "\n --- EXERCISE 1: Housing by savings ---" << endl;
    double savings;
    cout << "Enter the amount of money you have saved: ";
    cin >> savings;

    if (savings < 0) {
        // Less than $0
        cout << "With $" << savings << " Have some savings!" << endl;
    } else if (savings >= 0 && savings <= 199999) {
        // 0 to 199,999
        cout << "With $" << savings << " Keep saving!" << endl;
    } else if (savings >= 200000 && savings <= 500000) {
        // Apartment or co-op with nested detail
        cout << "With $" << savings << " you can afford an Apartment or Co-op" << endl;

        if (savings >= 200000 && savings <= 300000) {
            // 200,000 to 300,000
            cout << "Type: Studio" << endl;
        } else if (savings >= 300001 && savings <= 400000) {
            // 300,001 to 400,000
            cout << "Type: 1 BR + 1 Bath" << endl;
        } else if (savings >= 400001 && savings <= 500000) {
            // 400,001 to 500,000
            cout << "Type: 2 BRs + 1 Bath" << endl;
        }
    } else if (savings >= 500001 && savings <= 1000000) {
        // House with nested detail
        cout << "With $" << savings << " you can afford a House" << endl;

        if (savings >= 500001 && savings <= 700000) {
            // 500,001 to 700,000
            cout << "Type: 2 BRs + 2 Baths" << endl;
        } else if (savings >= 700001 && savings <= 1000000) {
            // 700,001 to 1,000,000
            cout << "Type: 3 BRs + 3 Baths" << endl;
        }
    } else if (savings >= 1000001) {
        // 1,000,001 and up
        cout << "With $" << savings << " you can afford a Mansion" << endl;
    }

    // ================= Exercise 2 =================
    cout << "\n --- EXERCISE 2: Switch-Case Double Number ---" << endl;
    int number;
    char choice;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Do you want to double the number? (Y/N): ";
    cin >> choice;

    switch (choice) {
        case 'Y':
        case 'y':
            number = number * 2; // double it
            break;
        case 'N':
        case 'n':
            // keep the same number
            break;
        default:
            number = 0; // reset to zero
            break;
    }

    cout << "The number is set to " << number << endl;

    return 0;
}
