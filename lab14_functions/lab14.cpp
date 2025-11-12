/*
Juan Velasco
Nov 12, 2025
lab 14:introduction to array, pointers and referances
*/
#include<iostream>
using namespace std;

#include "lab14_Velasco.cpp"

int main (){
    cout<<"\n ----- Example 1: pointers ----"<<endl;
    pointer_ref();

    cout<<"\n ----- Example 2: pointers ----"<<endl;
    string something = "Hello World";
    print value(something);
    printbyreferance(something);
    printaddress(&something);
    printaddress(something);

    return 0;
}