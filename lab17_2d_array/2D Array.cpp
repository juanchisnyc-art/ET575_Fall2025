/*
Juan Velasco
Nov 19, 2025
Lab 17: 2D array lab exercise
*/

#include <iostream>
#include <cstdlib>   // rand, srand
#include <ctime>     // time
using namespace std;

const int ROWS = 3;
const int COLS = 4;

// function prototypes
void populate(int arr[][COLS], int rows, int cols);
void printArray(int arr[][COLS], int rows, int cols);
double average(int arr[][COLS], int rows, int cols);

int main() {
    // seed random number generator once
    srand(time(0));

    int quizArray[ROWS][COLS];
    char again;

    do {
        cout << "\n // ------- 2D Array ------- //" << endl;

        // fill array with random numbers and print it
        populate(quizArray, ROWS, COLS);
        printArray(quizArray, ROWS, COLS);

        // compute and show average
        double avg = average(quizArray, ROWS, COLS);
        cout << "\nAverage = " << avg << endl;

        // ask user if they want another run
        cout << "\nAnother run? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}

// fill each cell with random number between 0 and 100
void populate(int arr[][COLS], int rows, int cols) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            arr[r][c] = rand() % 101;   // 0–100
        }
    }
}

// print the 2D array like in the template
void printArray(int arr[][COLS], int rows, int cols) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << arr[r][c] << "\t";
        }
        cout << endl;
    }
}

// return the average of all numbers in the array
double average(int arr[][COLS], int rows, int cols) {
    int total = 0;
    int count = rows * cols;

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            total += arr[r][c];
        }
    }

    return static_cast<double>(total) / count;
}
