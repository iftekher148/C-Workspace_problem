
// Method 1: Usingn build-in function
// # include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;

    cout<<"Enter String:";
    getline(cin,s);

    sort(s.begin(),s.end());
    cout<< s;
}