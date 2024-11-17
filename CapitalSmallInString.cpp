#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int capitalCount=0, smallCount=0;
    cout<<"Enter String:";
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            capitalCount++;
        }
        else if(str[i]>='a' && str[i]<='z'){
            smallCount++;
        }
    }

    cout<<"Capital:"<<capitalCount<<endl;
    cout<<"Small:"<<smallCount;
}