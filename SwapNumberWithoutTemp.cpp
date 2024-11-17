#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"After swapping a is:"<<a <<endl;
    cout<<"After swapping b is:"<<b;

}