#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int number,res=1;
//     cout<<"Enter Number:";
//     cin>>number;

//     while(number!=0){
//         res=res*number;
//         number--;
//     }
//     cout<<"Result:"<<res;
// }

int main(){
    int number,res=1;
    cout<<"Enter Number:";
    cin>>number;

    for(int i=1;i<number;i++){
        res=res*i;
    }
     cout<<"Result:"<<res;
}