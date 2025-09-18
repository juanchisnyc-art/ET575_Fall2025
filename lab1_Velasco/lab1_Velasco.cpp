/*
Juan Velasco
Aug 27, 2025
Lab 1, iostream
*/
// C ++ library
#include<iostream>
using namespace std;

int main()
{
    cout<< "---- Exmaple 1: cout data ----"<<endl;
    cout<<"this is a C++ code"<<endl;
    // variables = temporary storage of data
    // declare the variable first
    string username = "peterpan123";
    cout<<"\nWelcome to C++ \t \t"<<username<<endl;
    
    cout << "---- Exmaple 2: cin data ----"<<endl;
    cout<< "Enter a new username "<< endl;
    cin >> username;
    cout<<"New user is "<< username<<endl;

    cout << "---- Exmaple 3: data type ----"<<endl;
    //declare variable
    char sym = '%';
    float distance = 5;
    int number = 8.9;

 cout << "given symbol ="<<sym<<endl;
 cout << "Given distance"<<distance<<endl;
 cout << "Given number = "<<number<<endl;
 
    cout <<"----- EXCERSIE ----"<<endl;
    string country; "canada";
    char gender; "M";
    int zipcode; 11427;
    double rate; 2;

 cout<< "Enter coutry:";
 cin >> country;

cout<< "Enter gender (f for female, m for male, o for others):";
cin>> gender;

cout<< "Enter zip code:";
cin>> zipcode;

cout<< "Enter tax rate:";
cin>> rate;

 
 return 0;
}