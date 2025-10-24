/*
Juan Velasco
Oct 24, 2024
Lab 12, scooping, and predefined functions
*/
#include<iostream>

//global variable
int num = 8;


void doSomething(){
    //global variable
    num += 28;
    cout<<"num in doSomething function:"<<num<<endl;
}

#include "lab12_functions.cpp";
using namespace std;

int main(){
    cout<<"\n ------ example 1: local variables ------"<<endl;
    int sum = add(2,7)+add(1,5);// sum is local variable in the
    cout<<"The total sum in main() \t"<<sum<<endl;

     cout<<"\n ------ example 2: global variables ------"<<endl;
     cout<<"num oriignal value = \t"<<num<<endl;
     doSomething();
     num = 5;
     cout<<"num is main function = \t"<<num<<endl;

     cout<<"\n ------ example 3: hypotenuse ------"<<endl;
     float s1= 2;
     float s2= 3;
     float h = hyp(s1,s2);

     cout<<"\n---- EXCERSISE ------"<<endl;
     int x1 = // call 1st function
     int y1 = // call 1st function
     int x2 = // call 1st function
     int Y2 = // call 1st function

     float d = // call 2nd function

     // call 3rd function

     

    return 0;
}