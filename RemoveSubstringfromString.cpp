#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    size_t i; // size_t is an unsigned integer type, which means it can never hold negative values.find() returns size_t, which is unsigned.
    cout << "Enter Main String: ";
    getline(cin, s1);
    cout << "Enter Substring: ";
    getline(cin, s2);


    //s1-Hello world;
    //s2- world;

    i = s1.find(s2); // Find the substring in the main string "s1.find("World") → Returns 6 (starting position of "World")".
    if (i != -1) { // Check if the substring exists... if (6 != -1) → True (substring is found).
        s1.erase(i, s2.length()); // Remove the substring.... s1.erase(6, 5) → Removes 5 characters starting at index 6
    }

    cout << "Modified string: " << s1 << endl;

    return 0;
}
