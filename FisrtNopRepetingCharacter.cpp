//Given a string s of lowercase English letters, the task is to find the first non-repeating character. 
//If there is no such character, return ‘$’.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout<<"Enter String:";
    getline(cin,s);

    int n=s.length();

    for(int i=0; i<n; i++){  //iterate each character of the srting
        bool isUnique = true; // Starts with the assumption that the character is unique.
        for(int j=0; j<n; j++){
            // "i!=j"--> Ensures that the character is not compared with itself.It means  if "i==j", then just skiped.
            // s[3] = 's': Match found (i != j and s[i] == s[j]). "swiss"
            if(i!=j && s[i]==s[j]){
                isUnique = false; // when match found(dublicate), it will set "False" and "Break" loop.
                break;
            }
            
        }
         // If the character is still unique after checking all others, return it.
        if (isUnique) {
            cout << "First non-repeating character is: " << s[i] << endl;
            return 0; // Exit the program after finding the first non-repeating character.
        }

    }
     // If no unique character is found, print '$'.
    cout << "No non-repeating character found: $" << endl;
    return 0;
}