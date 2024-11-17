#include<bits/stdc++.h>
using namespace std;

int main(){
    int numberCount=0,alphabetCount=0,specialCount=0;
    string str;
    cout<<"Enter String:";
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            alphabetCount++;
        }
        else if (str[i]>='0' && str[i]<='9')
        {
            numberCount++;
        }
        else{
            specialCount++;
        }
        
    }
    cout<<"Number:"<<numberCount<<endl;
    cout<<"Alphabet:"<<alphabetCount<<endl;
    cout<<"Special:"<<specialCount<<endl;
}