/*
Juan Velasco
Homework 3 - for loop
*/

#include <iostream>
using namespace std;

int main() {

    // Program 1
    cout << "--- Program 1: Count Positive, Negative, and Zero Numbers ---\n";

    int num, pos = 0, neg = 0, zero = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num > 0) {
            pos++;
        }
        else if (num < 0) {
            neg++;
        }
        else {
            zero++;
        }
    }

    cout << "\nTotal positive numbers = " << pos << endl;
    cout << "Total negative numbers = " << neg << endl;
    cout << "Total zeros = " << zero << endl;


    // Program 2
    cout << "\n--- Program 2: Total and Average Daily Sales ---\n";

    int days;
    double sales, total = 0, average;

    cout << "Enter number of days: ";
    cin >> days;

    for (int i = 1; i <= days; i++) {
        cout << "Enter sales for day " << i << ": $";
        cin >> sales;
        total += sales;
    }

    average = total / days;

    cout << "\nTotal sales $ " << total << " for " << days << " days. Average daily sales $ " << average << endl;

    return 0;
}