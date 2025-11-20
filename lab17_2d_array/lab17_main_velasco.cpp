/*
Juan Velasco
Nov 19, 2025
lab 17, 2D array
*/
#include <iostream>
#include "lab17_function_velasco.cpp"
using namespace std;

int main() {
    cout << "\n --- example 1: array declare ----" << endl;
    array_dec();

    // Example 2
    cout << "\n ---- example 2: print each value in a 2D array ----" << endl;
    
    const int ROWSIZE = 5;   // must be a constant to use in array size
    int ar[3][ROWSIZE] = {
        {5, 10, 0, 0, 0},
        {-2, -9, 0, 0, 0},
        {6, 0, 0, 0, 0}
    };

    // adjust arguments here if your function prototype is different
    print2d(ar, 3);   // or print2d(ar, 3, ROWSIZE);

    // Example 3
    cout << "\n --- example 3: populating an array with numbers ---" << endl;

    // declare a 2D array
    int arr_num[2][3];

    // call the function
    populate_array(arr_num, 2, 3);
    print_array(arr_num, 2, 3);

    // Example 4
    cout << "\n --- example 4: sum of all numbers in a 2D array ---" << endl;
    int s = sum_all(arr_num, 2, 3);
    cout << "The total sum = " << s << endl;

    return 0;
}
