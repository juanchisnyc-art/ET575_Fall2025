/*
Juan Velasco
lab 16: array in a function
Nov 17, 2025
*/

#include <iostream>
using namespace std;

// ================= Example 1 =================

// Function to populate an array with numbers from the user.
void fillup(int size_array, int array[])
{
    for (int i = 0; i < size_array; i++)
    {
        cout << "Enter a number: ";
        cin >> array[i];
    }
    cout << endl;
}

// Function to print values in an array.
void printarray(int size_array, const int array[])
{
    for (int i = 0; i < size_array; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
}

// ================= Example 2 =================

// Max size for the positive numbers array.
const int ARRAY_SIZE = 10;

// Function to collect positive numbers (max 10 numbers).
// If a non-positive number (<= 0) is entered, the function stops.
void fillarray(int *array, int &number_user_index)
{
    int number;
    int index = 0;

    do
    {
        cout << "Enter a positive number: ";
        cin >> number;

        if (number > 0)
        {
            array[index] = number;
            index++;
        }

    } while (number > 0 && index < ARRAY_SIZE);

    // number_user_index is the number of valid positive elements.
    number_user_index = index;
}

// Search function to search for a number in the array.
int search(const int *arr, int number_user_index, int target)
{
    int index = 0;
    bool found = false;

    while (!found && index < number_user_index)
    {
        if (target == arr[index])
        {
            found = true;
        }
        else
        {
            index++;
        }
    }

    if (found)
        return index;
    else
        return -1;
}

// Function to print result of the search.
void printresult(int resultsearch, int target)
{
    cout << "What is the index of number " << target
         << " in the array? " << resultsearch << endl;
}

// ================= EXERCISE FUNCTIONS =================

// Function that returns the sum of all even numbers in an array.
int sum_even_numbers(int *arr, int size_array)
{
    int sum = 0;

    for (int i = 0; i < size_array; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }

    return sum;
}

// Function that returns the count of all negative numbers in an array.
int count_negative(int *arr, int size_array)
{
    int count = 0;

    for (int i = 0; i < size_array; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }

    return count;
}

// Print result for the exercise.
void print_result_exercise(int sum_even, int count_neg)
{
    cout << "Sum of all even numbers in the array: " << sum_even << endl;
    cout << "Count of negative numbers in the array: " << count_neg << endl;
}