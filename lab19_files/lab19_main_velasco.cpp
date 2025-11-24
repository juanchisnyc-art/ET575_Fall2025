/**
 *Juan Velasco
 *Nov 24,2025
 *lab19,files and console input
 */
#include<iostream>
#include "lab19_function_Velasco.cpp"

using namespace std;

int main(){
    cout<<"/n ------ Example 1: consule input failure ------"<<endl;
    checknumber();
    cout<<"/n------- Example 2: consule input failure in loop ----"<<endl;
    cout<<"validate number = "<<validatenumber()<<endl;

    cout<<"/n------- Example 3: reading a file ----"<<endl;
    readfile();

    cout<<"/n------- Example 4: writing content into a file ----"<<endl;
    writefile("outputfile.txt");

     cout<<"/n------- Example 5: append data into a file ----"<<endl;
    appendfile("outputfile.txt");
   
int main() 
    {;
    // Create file and write first line
    create_file();

    // Ask user for a message to append
    string userMsg;
    cout << "Enter a message to append to the file: ";
    getline(cin, userMsg);

    // Append message to file
    append_message(userMsg);

    // Read the file content
    cout << "\n=== Reading file ===\n";
    read_file("data_user.txt");
}


    return 0;
}