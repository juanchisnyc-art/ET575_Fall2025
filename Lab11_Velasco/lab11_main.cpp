/* 
Juan Velasco
lab 11, introduction to function
*/
#include<iostream>
#include "lab_11 function.cpp"

using namespace std;

int main(){
    cout<<"\n ----- Example 1: vid function ------"<<endl;
    printhello();
    printhello();
    printhello();
    
     cout<<"\n ----- Example 2: void function ------"<<endl;
     string username = "Anna";
     greeting ("Peter");
     greeting (username);
     greeting("Carl");
  
   cout<<"\n ----- Example 3: function with returning arguments ------"<<endl;
   int savefive = returnfive();
   savefive += 2;
   cout<<"The returning value after += 2 = \t" <<savefive<<endl;
   savefive +=2;
   cout<<"The returning value after += 2 = \t "<<savefive<<endl;

   cout<<"\n ----- Example 4: code after the return ------"<<endl;
    printsome();
    int n = somenumber()
    cout<<"Some number \t " <<n<<endl;
     return 0;
}