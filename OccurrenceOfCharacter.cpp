
# include<iostream>
using namespace std;

int main(){
    string s;
    char c;
    int result=0;

    cout<<"Enter String:";
    getline(cin,s);
    cout<<"Enter Character:";
    cin>>c;

    for(int i=0;i<=s.length()-1;i++){
        if(s[i]==c)
        result++;
    }
    cout<< result;
}