/*
Juan Velasco
Lab 11, introduction to function
*/
#include <iostream>
#include <string>
using namespace std;

void printhello() {
    cout << "Hello function!" << endl;
    return;
}

void greeting(string name) {
    cout << "Good afternoon " << name << endl;
    return;
}

int returnfive() {
    return 5;
}

void printsome() {
    cout << "This is printed before return." << endl;
    return;
}

float areasquare(float side) {
    float area = side * side;
    return area;
}

int product(int n1, int n2) {
    return n1 * n2;
}

double fah(double celsius) {
    return celsius * 1.8 + 32;
}

void printfah(double f) {
    cout << "Fahrenheit temperature: " << f << endl;
}

string checknumber(int number) {
    if (number == 0) {
        return "zero";
    } else if (number > 0) {
        return "positive";
    } else {
        return "negative";
    }
}

void printnumber(string n) {
    cout << "The number is " << n << endl;
}

bool isEven(int number) {
    if (number % 2 == 0)
        return true;
    else
        return false;
}

void printResult(int number, bool result) {
    cout << "Is " << number << " even? " << boolalpha << result << endl;
}