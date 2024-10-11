//https://www.youtube.com/watch?v=TPNMn7skdAQ&list=PLIY8eNdw5tW8TmAF1Xkez1CY7HE4X9KRL&index=4

/*
11111
 2222
  333
   44
    5
*/



# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;

    for(int i=n;i>0;i--){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<n-i+1;
        }
        cout<<endl;
    }
}