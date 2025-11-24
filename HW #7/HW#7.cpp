#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

// function to collect the size of an array
int collect_size() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    return size;
}

// function to populate an array with RANDOM numbers between 1 and 99
void populate_numbers(int ar[], int s) {
    for (int i = 0; i < s; i++) {
        ar[i] = rand() % 99 + 1;
    }
}

// function to print all numbers in an array
void print_numbers(int ar[], int s) {
    cout << "Numbers in array: ";
    for (int i = 0; i < s; i++) {
        cout << ar[i] << "\t";
    }
    cout << endl;
}

// function to find the minimum number in an array
int array_min(int ar[], int s) {
    int min = ar[0];
    for (int i = 1; i < s; i++) {
        if (ar[i] < min) {
            min = ar[i];
        }
    }
    return min;
}

// function to return the average of all numbers in an array
float array_avg(int ar[], int s) {
    int sum = 0;
    for (int i = 0; i < s; i++) {
        sum += ar[i];
    }
    return static_cast<float>(sum) / s; // convert to float for decimal average
}

int main() {
    srand(time(0));

    // declare variable num to save the size of an array
    int num = collect_size();

    // declare an array with size num
    int a[num];

    // fill and display array
    populate_numbers(a, num);
    print_numbers(a, num);

    cout << "Minimum number:\t\t" << array_min(a, num) << endl;
    cout << "Average of numbers:\t" << array_avg(a, num) << endl;

    return 0;
}