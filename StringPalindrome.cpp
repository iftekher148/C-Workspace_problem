// we need to determine if it reads the same forwards and backwards. This can be done by comparing characters from the beginning and end 
// of the string, moving toward the center.

//Method 1: Firstly reverse the string & then compare with main string. If match with main string then palindrom

# include<iostream>
using namespace std;

int main(){
    string str1;
    string reverse_string;

    cout<<"Ennter String:";
    getline(cin,str1);

    for(int i=str1.length()-1;i>=0;i--){
        reverse_string += str1[i]; //Append erver string.
    }
     if(str1==reverse_string){
        cout<<"String is Palindrom";
        }
         else{
        cout<<"String is not Palindrom";
        }
}



// Method 2: https://www.geeksforgeeks.org/palindrome-string/

// # include<iostream>
// using namespace std;
// int main(){
//     string s;

//     cout<<"Enter String:";
//     getline(cin,s);

//     int left=0;
//     int right=s.length()-1;

//     while(left<right){
//         if(s[left]!=s[right]){
//             cout<< "Is not Palindrom....";
//         }
//         left++;
//         right--;
//         cout<<"String is Palindrom!!!!";
//     }

// }