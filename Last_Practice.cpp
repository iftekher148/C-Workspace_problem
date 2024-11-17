// 1. String reverse:

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s,reversed;
//     cout<<"Enter String:";
//     getline(cin,s);
//     for(int i=s.length()-1;i>=0;i--){
//         reversed=s[i];
//         cout<<reversed;
//     }
// }



// 2. String Palindrome-Done

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s,reversed;
//     cout<<"Enter String to Palin:";
//     getline(cin,s);
//     for(int i=s.length()-1;i>=0;i--){
//         reversed+=s[i];
//     }
//     if(s==reversed){
//         cout<<"This is Palind:";
//     }
//     else{
//         cout<<"Is not Palind:";
//     }
// }


// 3. String Anagram--Done
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s,s1;
//     cout<<"Enter String S:";
//     getline(cin,s);
//     cout<<"Enter String S1:";
//     getline(cin,s1);
    
//     sort(s.begin(),s.end());
//     sort(s1.begin(),s1.end());

//     if(s==s1){
//         cout<<"This is Anagram";
//     }
//     else{
//         cout<<"Not Anagram";
//     }
// }

// 4. Find occurrences of characters in a string--Done
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     char c;
//     int count=0;

//     cout<<"Enter String S:";
//     getline(cin,s);
//     cout<<"Enter Character:";
//     cin>>c;

//     for(int i=0;i<s.length();i++){
//         if(s[i]==c){
//             count++;
//         }
//     }
//     cout<<count;
    
// }




// 5. Find the count of Capital and Small letters in a string

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     int latterCount=0,numberCount=0,specialCount=0;

//     cout<<"Enter String:";
//     getline(cin,s);
    
//     for(int i=0;i<=s.length();i++){
//         if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
//             latterCount++;
//         }
//         else if(s[i]>='0' && s[i]<='9'){
//             numberCount++;
//         }
//         else{
//            specialCount++ ;
//         }
//     }

//     cout<<"Latter:"<< latterCount<<endl;
//     cout<<"Number:"<< numberCount<<endl;
//     cout<<"Special:"<< specialCount;
// }


// 6. Remove duplicate characters from string

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s,res="";
//     int i,j;
//     cout<<"Enter String for Duplicate:";
//     cin>>s;

//     for(i=0;i<s.length();i++){
//         for(j=0;j<s.length();j++){
//             if(s[i]==s[j])
//             break;
//         }
//         if(i==j){
//             res+=s[i];
//         }
//     }
//     cout<<res;
   
// }

// 8. Reverse number

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num,lastdigit,reversed=0;
//     cout<<"Enter Number:";
//     cin>>num;

//     while(num!=0){
//         lastdigit=num%10;
//         reversed=reversed*10+lastdigit;
//         num=num/10;
//     }
//    cout<<reversed;
// }


// 9. factoria

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num,fac=1;
//     cout<<"Enter Fac:";
//     cin>>num;

//     for(int i=1;i<=num;i++){
//         fac*=i;
//     }
//     cout<<fac;
// }

// // 10. Fibonacci series...

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num,a=0,b=1;
//     cout<<"Enter num Fab:";
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         cout<<a <<" ";
//         int nextItem=a+b;
//         a=b;
//         b=nextItem;
//     }
// }

// // 10. sum of Fibonacci series...

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num,a=0,b=1,sum=0;
//     cout<<"Enter num sum Fab:";
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         sum+=a;
//         int nextItem=a+b;
//         a=b;
//         b=nextItem;
//     }
//     cout<<sum;
// }



// // 10. Nth  Fibonacci series...

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num,a=0,b=1,sum=0;
//     cout<<"Enter num Nth Fab:";
//     cin>>num;
//     for(int i=1;i<=num;i++){
        
//         int nextItem=a+b;
//         a=b;
//         b=nextItem;
//     }
//     cout<<a;
// }




// 10. Pattern Search OF A given string

#include<bits/stdc++.h>
using namespace std;
int main(){
    string text,patt;
    int i,j;
    cout<<"Enter Text:";
    getline(cin,text);
    cout<<"Enter Pattern:";
    getline(cin,patt);

    int text_len=text.length();
    int patt_len=patt.length();
    int maxIndex=text_len-patt_len+1;
    bool found=false;

    for(i=0;i<maxIndex;i++){
        for(j=0;j<patt_len;j++){
            if(text[i+j]!=patt[j])
            break;
        }
        if(j==patt_len){
            cout<<"Pattern found on index: "<<i;
            found=true;
        }
    }
    if(!found){
        cout<<"Not found";
    }
}























//Search Pattern of String:

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string text,patt;
//     int i,j;
//     cout<<"Enter text:";
//     getline(cin,text);
//     cout<<"Enter Pattern:";
//     getline(cin,patt);

//     int text_length=text.length();
//     int patt_length=patt.length();
//     int maxIndex=text_length-patt_length+1;
//     bool found=false;

//     for(i=0;i<maxIndex;i++){
//         for(j=0;j<patt_length;j++){
//             if(text[i+j]!=patt[j])
//             break;
//         }
//         if(j==patt_length){
//             cout<<"Patter found on index: "<<i;
//             found=true;
//         }
//     }
//     if(!found){
//         cout<<"Not found Pattern";
//     }
// }