/*
Juan Velasco
oct 27,2025
lab 13: random variables
*/

#include<iostream>
#include "lab13_function_velasco.cpp"

using namespace std;

int main(){
    cout<<"\n ---- Example 1: random number ----- "<<endl;
    int r = random_number();
    cout<<"random number = "<<r<<endl;

    cout<<"\n ---- Example 2: different random number ----- "<<endl;
    int diff_random = different_random();
    cout<<"Differeent random number:"<<diff_random<<endl;




    cout<<"\n ---- Example 3: random number between 0 and 9 ----- "<<endl;
    int r_0_9 = random_0_9();
    cout<<"Number between 0 and 9: \t"<<r_0_9<<endl;

        cout<<"\n ---- Example 4: random number between -10 and 5 ----- "<<endl;
        cout<<"Number between -10 and 5 \t "<<random_neg10_5()<<endl;

        cout<<"\n ----- EXCERCISE ------ "<<endl;
        int run1 = random_1_6();
        int run2 = random_1_6();

        // calll function to check for snake_eyes
        bool result = compare_ones(run1,run2);

        // call function to print result
        printresult(result);
   // exercise: a die roll 1..6 (inclusive)
int random_1_6(){
    ensureSeeded();
    return (rand() % 6) + 1;            // 1..6
}

// exercise: check for snake eyes (both dice are 1)
bool compare_ones(int a, int b) {
    return (a == 1 && b == 1);
}

// exercise: print the result message based on compare_ones()
void printresult(bool is_snake_eyes) {
    if (is_snake_eyes) {
        cout << "Snake eyes! You rolled double ones!" << endl;
    } else {
        cout << "Not snake eyes." << endl;
    }
}
   
   
        return 0;
}