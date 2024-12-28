// //a word is called to be isogram, if there is not duplicate character 

// # include<iostream>
// using namespace std;

// int main(){
//     string str,res="";
//     int i,j;
//     cout<<"Enter String:";
//     getline(cin,str);

//     for( i=0;i<str.length();i++){
//         for( j=0;j<str.length();j++){
//             //inner loop  break condition
//             if(str[i]==str[j])
//                 break; 
//         }
//         //outter loop conndition. i & j index value same hole, result i position vale add korbe
//         if(i==j){
//             res+=str[i];
//         }
//     }
//     //out of all loop
//     //cout<<"Result:"<<res;

//     if(str==res){
//         cout<<"Isogram Word";
//     }
//     else{
//         cout<<"Not Isogram Word";
//     }
// }


 # include<iostream>
 # include<map>
using namespace std;

int main(){
    string s;
    cout<<"enter string:";
    getline(cin,s);

    map<char> c;

    for(auto ch : s){
        c.insert(ch);
    }
    if(c.size()==s.size()){
        return true;
    }
    else{
        return false;
    }
}
