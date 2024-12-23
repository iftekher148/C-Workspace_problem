// //We mainly use two maps m1 and m2 to store "characters" as "keys" and their "first indexes" as "values"

// //1. If the lengths of s1 and s2 are not same, return false.

// //2. Do the following for every character in s1 and s2.
//     // If a character is seen first time in s1, then store it's index in map m1.
//     // If a character is seen first time in s2, then store it's index in map m2.
//     // If indexes in map for both the characters do not match, return false.


// #include <iostream>
// #include <unordered_map>
// #include <string>
// using namespace std;

// int main(){
//     string str1,str2;

//     cout<<"Enter  First String:";
//     getline(cin,str1);
//     cout<<"Enter Second String:";
//     getline(cin,str2);

//     // If the lengths of s1 and s2 are not same, return false.
//     if(str1.length()!=str2.length())
//     return false;

//     //create map for str1 & str2:
//      unordered_map<char, int> m1, m2;

//     for(int i=0;i<str1.length();i++){
//         // If the character is not on the map, then save it's index on the map

//         // check character is present on the map????
//         // If a character is seen first time in s1, then store it's index in map m1.
//         if(m1.find(str1[i]) == m1.end()){   // on the str1's, 1st cahracter is not on the map....
//             m1[str1[i]]=i;    // then saves str1's, 1st cahracter index on the map
//         }
        
//         // If a character is seen first time in s2, then store it's index in map m2.
//          if(m2.find(str2[i]) == m2.end()){   // on the str2's, 1st cahracter is not on the map....
//             m2[str2[i]]=i;    // then saves str2's, 1st cahracter index on the map
//         }
        
//             // If indexes in map for both the characters do not match, return false.
//         if(m1[str1[i]] != m2[str2[i]]){
//             cout<<"False";
//             return false;
//         }
//     }
//     cout<<"True";
//     return true;

// }


//Example 2:
#include <iostream>
#include <map>
using namespace std;

int main(){
    string str1,str2;

    cout<<"Enter  First String:";
    getline(cin,str1);
    cout<<"Enter Second String:";
    getline(cin,str2);

    // If the lengths of s1 and s2 are not same, return false.
    if(str1.length()!=str2.length())
    return false;

    //create map for str1 & str2:
    map<char, char> m1, m2;

    for(int i=0; i<str1.length();i++){         //str1=aab ^ str2=xxy
        if(m1[str1[i]]==0 & m2[str2[i]==0]){   // str1's 1st character is not map with str2's 1st character. "a" is not map with "x" and "x" is not map with "a". this condition like "m1.find(str1[i]) == m1.end()"
            m1[str1[i]] = str2[i] ;// map "a" with "x"
            m2[str2[i]] = str1[i] ;// map "x" with "a"
        } 
        if(m1[str1[i]] != str2[i] && m2[str2[i]] != str1[i])  { // if "a" is not map with "x" and "x" is not map with "a", then return 0;
            cout<<"False";
            return false;
        }
    }

    return true;
}