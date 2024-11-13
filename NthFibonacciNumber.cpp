// The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

// Example:

// Input: n = 2
// Output: 1 
// Explanation: 1 is the 2nd number of Fibonacci series.


// Input: n = 5
// Output: 5
// Explanation: 5 is the 5th number of Fibonacci series.

# include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1;

    cout<<"Enter number:";
    cin>>n;

    for(int i=0;i<n;i++){   //for(i=1;i<=n;i++)
        //cout<< a <<" ";

        int nextItem=a+b;
        a=b;
        b=nextItem;
    }
   cout<< a <<endl;
}
