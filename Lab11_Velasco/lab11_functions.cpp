/*
Juan Velasco
Lab 11, introduction to function
*/
#include<iostream>

using namespace std;


// void function does not return any value
void printhello(){
    cout<<"Hello function!"<<endl;
    return;
}
// void function with parameters
void greetings(string name){
    cout<<"Good afternoon"<<name<<endl;
    return;
}
//example 3, function that returns an integer (whole number)
int returnfive(){
    return 5;
}
//example 4, any(whole number)



//example 5, function that calulates and returns the area of a float square
float areasquare(float side){
    float area = side*side;
    return area;
}

//example 6, function that calculates and returns the product of two numbers
int product(int n1, int n2){
    return n1*n2;
}

// example 7, function that calculates and returns the farenheit temperature double
double fah(double celcsius){
    return celsius*1.8 +32;
}

//example 8: check a number
string checknumber(int number){
    if(number==0){
        return "zero";
    }
    else if(number>0){
        return "positive";
    }
    else{
        return "negative";
    }
}
void printnumber(string n){
    cout<<"The number is " <<n <<endl;
}