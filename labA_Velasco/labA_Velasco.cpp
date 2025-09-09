/*
Juan Velasco
September 9, 2025
  Lab Exercise A – Leveraging AI as a C++ Coding Assistant (Part 1)
  AI Assistant Used: ChatGPT
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "---- Example 1: string indexing [] ----\n";
    string first_name = "Juan";
    cout << "first_name = " << first_name << "\n";
    cout << "The 3rd character (index 2) = " << first_name[2] << "\n";

    cout << "\n---- Example 2: .at() and .length() ----\n";
    cout << "The 1st character using .at(0) = " << first_name.at(0) << "\n";
    int characters = first_name.length();
    cout << "There are " << characters << " character(s) in " << first_name << "\n";

    cout << "\n---- Example 3: concatenation with + ----\n";
    string last_name = "Velasco";
    string username  = "JV123";
    string full_line = first_name + " " + last_name + " - " + username;
    cout << "Concatenated: " << full_line << "\n";

    cout << "\n---- Example 4: substr(start, length) ----\n";
    string msg = "Today is a beautiful day!";
    cout << "Original: " << msg << "\n";
    // CLASS PRACTICE: extract 5 characters starting from the 3rd character
    // start index = 2 (because indexing is zero-based)
    string part = msg.substr(2, 5);
    cout << "msg.substr(2, 5) = " << part << "\n";

    cout << "\n---- End of demo ----\n";
    return 0;
}

/*
--- AI Assistant Used: ChatGPT ---
Was the code correct? (Yes/No): Yes
Was it readable and properly commented?: Yes
Were you able to explain each line of code?: yes
Did it use the same programming concepts we learned in class?:

Terminal Output:---- Example 1: string indexing [] ----
first_name = Juan
The 3rd character (index 2) = a

---- Example 2: .at() and .length() ----
The 1st character using .at(0) = J
There are 4 character(s) in Juan

---- Example 3: concatenation with + ----
Concatenated: Juan Velasco - JV123

---- Example 4: substr(start, length) ----
Original: Today is a beautiful day!
msg.substr(2, 5) = day i

*/