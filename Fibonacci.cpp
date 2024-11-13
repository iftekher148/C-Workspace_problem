# include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1;

    cout<<"Enter number:";
    cin>>n;

    for(int i=1;i<=n;i++){   //for(i=1;i<=n;i++)
        cout<< a <<" ";

        int nextItem=a+b;
        a=b;
        b=nextItem;
    }
    //a=a+b;
}