/*
Juan Velasco
Lab 3, string and string methods
Sep 8,2025
*/
#include<iostream>
#include<string>

using namespace std;

int main (){
    cout<<"/n---- Example 1: string indexing -----"<<endl;
    string first_name = "Juan";
    cout<<"The 3rd character = "<<first_name[2]<<endl;
    
    
    cout<< "The 1st character =" <<first_name.at(0)<<endl;
    int characters = first_name.length();
    cout<<"There is "<<characters<<"character/s in"<<first_name<<endl;
    
cout<<"\n ----- Example 3: concatenate character/s in a string"<<endl;
string last_name = "pan";
string username = "PP123";
cout<<"\n concatnatedword="<<first_name + username"<<endl;
cout<<"\n ---- Example 4: subtracting characters in a string ---"<<endl;
string msg = "Today is a beautiful day!";
// extract 5 charactersfrom the 3rd character
string subst_char =msg.substr(2,5);
cout<<"Extract characters = "<<subst_char<<endl;

cout<<"\n --- Example 5: inserting characters in a string"<<endl;
// insert the word "maybe"
msg.insert (5,"maybe");
cout<<"After insert method = "<<msg<<endl;

cout<<"\n ---- Example 6/: inserting characrters to the end of a string"<<endl;
msg.append("-- by Prof. Wu");


cout<<"\n---- Example 7: inserting characters in a string----"<<endl;
msg.replace(17,9,"bad");
cout<<"After replace method ="<<msg<<endl;

cout<<"\n ---- Example 8 erasing characters fro a string ---"<<endl;
//erase the word"Today"
msg.erase(0.5);
cout<<"After erase method = "<<msg<<endl;

cout<<"\n ----- Exmaple 9: finding chracters in a string ----"<<endl;
// find method returns the index number of the first found
// if the character was not found, it returns -1
//find the word'Prof'

int index_prof = msg.find("Prof");
cout<<"The index of prof = "<<index_prof<<endl;

cout<<"\n -----Exserise---"<<endl;
string word ="";
cout<<"Enter a word:" ;
cin>>word;

return 0;
}