//print traingle using c++. 
// https://www.youtube.com/watch?v=d6c5T0bnNE4&list=PLIY8eNdw5tW8TmAF1Xkez1CY7HE4X9KRL&index=2

/*
        *
        **
        ***
        ****
        *****
*/

# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){    // "*""  printing depends on this inner for loop
            cout<<"*";
        }
        cout<<endl;
    }
}