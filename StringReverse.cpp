# include<iostream>
using namespace std;

int main(){
    string str;
    string reversed_string;

    cout<<"Enter String:";
    getline(cin,str);

    for(int i=str.length()-1;i>=0;i--){
            reversed_string=str[i];
            cout<<reversed_string;
    }
}