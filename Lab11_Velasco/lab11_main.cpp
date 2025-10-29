/* 
Juan Velasco
Lab 11, introduction to function
*/
#include <iostream>
#include "lab11_functions.cpp"

using namespace std;

int main() {
    cout << "\n ----- Example 1: vid function ------" << endl;
    printhello();
    printhello();
    printhello();
    
    cout << "\n ----- Example 2: void function ------" << endl;
    string username = "Anna";
    greeting("Peter");
    greeting(username);
    greeting("Carl");
  
    cout << "\n ----- Example 3: function with returning arguments ------" << endl;
    int savefive = returnfive();
    savefive += 2;
    cout << "The returning value after += 2 = \t" << savefive << endl;
    savefive += 2;
    cout << "The returning value after += 2 = \t" << savefive << endl;

    cout << "\n ----- Example 4: code after the return ------" << endl;
    printsome();
    int n = somenumber();
    cout << "Some number \t" << n << endl;

    cout << "\n ----- Example 5: calculate area -------" << endl;
    float area_square = areasquare(2.5);
    cout << "The area of a square is \t" << area_square << endl;

    cout << "\n ----- Example 6 product of two number -----" << endl;
    int p = product(2, 3);
    cout << "The product is \t" << p << endl;

    cout << "\n ----- Example 7 calculate the farenheit temperature ----" << endl;
    double f = fah(12.5);
    cout << "The Farenheit temperature is: \t" << f << endl;

    cout<<"\n ----- Example 8: check a number -----"<<endl;
   
    string checknum=checknumber(-1);
    printnumber(checknum);
    print

    cout<<"\n ----- EXCERCISE ----"<<endl;
 
    return 0;
}