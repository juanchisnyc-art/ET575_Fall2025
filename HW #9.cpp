#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// ------------------------------
// Function: arraysize()
// Ask user for a size between 1 and 100
// ------------------------------
int arraysize() {
    int size;
    cout << "Enter an array size between 1 and 100: ";
    cin >> size;

    while (size < 1 || size > 100) {
        cout << "Invalid input. Enter a size between 1 and 100: ";
        cin >> size;
    }
    return size;
}

// ------------------------------
// Function: randPopulate()
// Fill array with random numbers [10, 30]
// ------------------------------
void randPopulate(int noise[], int s) {
    srand(time(0)); // Seed random

    for (int i = 0; i < s; i++) {
        noise[i] = rand() % 21 + 10; 
        // Generates values from 10 → 30
    }
}

// ------------------------------
// Function: print()
// Display array values
// ------------------------------
void print(int noise[], int s) {
    for (int i = 0; i < s; i++) {
        cout << noise[i] << "\t";
    }
    cout << endl;
}

// ------------------------------
// Function: reverse()
// Swap elements to reverse array
// ------------------------------
void reverse(int noise[], int s) {
    int left = 0;
    int right = s - 1;

    while (left < right) {
        int temp = noise[left];
        noise[left] = noise[right];
        noise[right] = temp;

        left++;
        right--;
    }
}

int main() {
    int sizearray = arraysize();   // Get array size
    int noise[sizearray];          // Create array

    randPopulate(noise, sizearray);

    cout << "Original Set:" << endl;
    print(noise, sizearray);

    reverse(noise, sizearray);

    cout << endl << "Reversed Set:" << endl;
    print(noise, sizearray);

    return 0;
}

