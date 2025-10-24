/* 
Juan Velasco
lab 11, introduction to function
*/
#include<iostream>

using namespace std;


//void function does not return any value
void printhello(){
    cout<<"Hello function!"<<endl;
return;
}

//void function with paremeters
void greeting(string name){
    cout<<"Good afternoon"<< endl;
    return;
}

// example 3; function that. returns an integer (whole number)
int returnfive(){
    return 5;
}

// example 4, any code after the return willl not be executed
void printsome(){
    cout<<"Something"<<endl;
    return;
    cout<<"After the return"<<endl;
}  

int somenumber(){
    int num = 10;
    return num;
    num
}

