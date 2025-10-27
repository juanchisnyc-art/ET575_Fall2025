/*
Juan Velasco
oct 27,2025
lab 13: random variables
*/

#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

// function to return a random number
int random_number(){
    return rand();
}

// example 2: different random number
int different_random(){
    srand(time(0));
    return rand();
}

// example 3: range of random number
// generate random numbers between 0 and 9
int random_0_9(){
    return rand() % 10;
}

// example 4: specific range of random number
int random_neg10_5(){
    return -10 + rand() % 16;
}

// EXERCISE
// function that generates a random number between 1 and 6
int random_1_6(){
    return 1 + rand() % 6;   // generates numbers from 1 to 6
}

// function to compare if two numbers are 1s
bool compare_ones(int r1, int r2){
    if (r1 == 1 && r2 == 1)
        return true;
    else
        return false;
}

// function to prompt result
void printresult(bool result){
    if (result)
        cout << "Snake eyes! You rolled double ones!" << endl;
    else
        cout << "Not snake eyes." << endl;
}