/*
Juan Velasco
Lab 11, introduction to function
*/
#include <iostream>
#include <string>
using namespace std;

void printhello();
void greeting(const string& name);
int returnfive();
void printsome();
float areasquare(float side);
int product(int n1, int n2);
double fah(double celsius);
void printfah(double f);
string checknumber(int number);
void printnumber(string n);
bool isEven(int number);
void printResult(int number, bool result);

int main(){
    cout << "\n ---- Example 1: void function ----" << endl;
    printhello();
    printhello();
    printhello();

    cout << "\n ---- Example 2: void function with arguments ----" << endl;
    string username = "Juan";
    greeting("Peter");
    greeting(username);
    greeting("Carl");

    cout << "\n ---- Example 3; function with returning value ----" << endl;
    int savefive = returnfive();
    savefive += 2;
    cout << "The returning value after += 2 = \t " << savefive << endl;

    cout << "\n ---- Example 4: code after the return ----" << endl;
    printsome();

    cout << "\n ---- Example 5: calculate area of square ----" << endl;
    float area_square = areasquare(2.5f);
    cout << "The area of a square is \t" << area_square << endl;

    cout << "\n ---- Example 6: product of two numbers ----" << endl;
    int p = product(2,3);
    cout << "the product is  \t" << p << endl;

    cout << "\n ---- Example 7: calculate the farenheit temperature ----" << endl;
    double f = fah(12.5);
    printfah(f);

    cout << "\n ---- Example 8: check a number ----" << endl;
    string checknum = checknumber(3);
    printnumber(checknum);

    cout << "\n ---- EXCERCISE ----" << endl;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    bool check = isEven(num);
    printResult(num, check);

    return 0;
}
