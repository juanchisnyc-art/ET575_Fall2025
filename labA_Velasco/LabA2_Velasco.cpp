/*
Juan Velasco
September 9 2025
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "== Demo A: indexing [] ==\n";
    string first = "Juan";
    cout << "first = " << first << "\n";
    cout << "Index 1 (second char) = " << first[1] << "\n";   // should be 'u'

    cout << "\n== Demo B: .at() and .length() ==\n";
    cout << "first.at(3) = " << first.at(3) << "\n";          // should be 'n'
    int len = first.length();
    cout << "length = " << len << "\n";

    cout << "\n== Demo C: concatenation (+) ==\n";
    string last = "Velasco";
    string tag  = "ET575";
    string line = first + " " + last + " | " + tag;
    cout << "Concatenated line: " << line << "\n";

    cout << "\n== Demo D: substr(start, length) ==\n";
    string text = "Today is a beautiful day!";
    cout << "text = " << text << "\n";
    // Extract 5 characters starting at index 0 -> "Today"
    string slice1 = text.substr(0, 5);
    cout << "text.substr(0, 5) = " << slice1 << "\n";
    // Extract 4 characters starting at index 6 -> "is a"
    string slice2 = text.substr(6, 4);
    cout << "text.substr(6, 4) = " << slice2 << "\n";

    cout << "\n== End ==\n";
    return 0;
}

/*
--- AI Assistant Used: GitHub Copilot ---
Was the code correct? (Yes/No): Yes
Was it readable and properly commented?: yes
Were you able to explain each line of code?: yes
Did it use the same programming concepts we learned in class?:Yes
Terminal Output: == Demo A: indexing [] ==
first = Juan
Index 1 (second char) = u

== Demo B: .at() and .length() ==
first.at(3) = n
length = 4

== Demo C: concatenation (+) ==
Concatenated line: Juan Velasco | ET575

== Demo D: substr(start, length) ==
text = Today is a beautiful day!
text.substr(0, 5) = Today
text.substr(6, 4) = is a

*/