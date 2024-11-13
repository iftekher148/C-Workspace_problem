
// Example:
// If you input n = 5, the Fibonacci sequence is 0, 1, 1, 2, 3. The sum of these numbers is 0 + 1 + 1 + 2 + 3 = 7.

# include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1;
    int sum=0;

    cout<<"Enter number:";
    cin>>n;

    for(int i=1;i<=n;i++){   //for(i=1;i<=n;i++)
        sum =sum+a;
       
        int nextItem=a+b;
        a=b;
        b=nextItem;
    }
     cout<< sum <<" ";
}