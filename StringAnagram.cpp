// An anagram of a string is another string that contains the same characters, only the order of characters can be different.

// nput: s1 = “geeks”  s2 = “kseeg”
// Output: true
// Explanation: Both the string have same characters with same frequency. So, they are anagrams.


// Input: s1 = “allergy”  s2 = “allergic”
// Output: false
// Explanation: Characters in both the strings are not same. s1 has extra character ‘y’ and s2 has extra characters ‘i’ and ‘c’, so they are not anagrams.


// Method 1: We can simply sort the two given strings and compare them – if they are equal, then the original strings are anagrams of each other.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;

    cout<<"Enter 1st String:";
    getline(cin,s1);
    cout<<"Enter 2nd String:";
    getline(cin,s2);

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1==s2){
        cout<<"String Anagram";
    }
    else{
        cout<<"String is not Anagram";
    }
}

