/*
Juan Velasco
Lab 5, control flow
Sep 10, 2025
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\n ----- Example 1: bool variable ----" << endl;
    // check if a number is positive
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool checkPositive = (n >= 0);
    cout << "Is " << n << " positive? " << checkPositive << endl; // prints 1/0

    cout << "\n ----- Example 2: if statement ----" << endl;
    int checking_code = 111;
    if (n >= 0) {
        checking_code = 999;
    }
    cout << "checking_code = " << checking_code << endl;

    cout << "\n ---- Example 3: if-else statement ----" << endl;
    if (n % 2 == 0) {
        cout << n << " is EVEN" << endl;
    } else {
        cout << n << " is ODD" << endl;
    }

    cout << "\n ---- Example 4: absolute value (if-else) ----" << endl;
    if (n >= 0) {
        cout << n << " is positive" << endl;
        cout << "The absolute value is " << n << endl;
    } else {
        cout << n << " is negative" << endl;
        n *= -1;
        cout << "The absolute value is " << n << endl;
    }

    cout << "\n ---- Example 5: multiway statement ----" << endl;
    // select the color according to a wavelength
    int wavelength = 0;
    string emitted_color = "";
    cout << "Enter a wavelength: ";
    cin >> wavelength;

    // visible/near-visible buckets (simple demo ranges)
    if (wavelength < 380) {
        emitted_color = "ultraviolet";
    } else if (wavelength <= 520) {
        emitted_color = "blue";
    } else if (wavelength <= 590) {
        emitted_color = "green";
    } else if (wavelength < 740) {
        emitted_color = "red";
    } else if (wavelength >= 740) {
        emitted_color = "infrared";
    } else {
        emitted_color = "unable to read";
    }

    cout << "The emitted color of wavelength " << wavelength
         << " is " << emitted_color << endl;

    cout << "\n ---- EXERCISE ----" << endl;
    // declare variables
    float final_exam = 0.0f;
    float labs       = 0.0f;
    float homework   = 0.0f;
    float grade      = 0.0f;
    string gpa       = "";

    // collect values for final_exam, labs, and homework (0–100 scale)
    cout << "Enter Final Exam grade (0-100): ";
    cin >> final_exam;
    cout << "Enter Labs average (0-100): ";
    cin >> labs;
    cout << "Enter Homework average (0-100): ";
    cin >> homework;

    // calculate the overall grade
    grade = final_exam * 0.50f + labs * 0.30f + homework * 0.20f;
    cout << "Overall numeric grade = " << grade << endl;

    // multiway conditional statement (letter grade)
    if (grade >= 90) {
        gpa = "A";
    } else if (grade >= 80) {
        gpa = "B";
    } else if (grade >= 70) {
        gpa = "C";
    } else if (grade >= 60) {
        gpa = "D";
    } else {
        gpa = "F";
    }

    // print result
    cout << "Letter grade = " << gpa << endl;

    return 0;
}