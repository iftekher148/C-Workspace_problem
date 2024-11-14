// In this example, we’re examining the character r at i = 4 in the string "programming". The code checks if r has already appeared before in the string, and since it has, it is not added to the result.

// Here's a step-by-step explanation:

// Step-by-Step for i = 4
// Outer Loop (i = 4):

// str[i] is r (the character at index 4).
// We now start the inner loop to check if r has appeared earlier in the string.
// Inner Loop (j = 0 to 4):

// When j = 0: str[j] is p, which does not match str[i] (r), so the loop continues.
// When j = 1: str[j] is r, which does match str[i] (r), so the inner loop breaks.
// Condition i == j:

// After breaking out of the inner loop, we check if i == j.
// However, since j = 1 when the loop breaks, and i = 4, this condition is false (4 != 1).

# include<iostream>
using namespace std;

int main(){
    string str,res="";
    cout<<"Enter String:";
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        for(int j=0;j<str.length();j++){
            //inner loop  break condition
            if(str[i]==str[j])
                break; 
        }
        //outter loop conndition. i & j index value same hole, result i position vale add korbe
        if(i==j){
            res+=str[i];
        }
    }
    //out of all loop
    cout<<"Result:"<<res;
}