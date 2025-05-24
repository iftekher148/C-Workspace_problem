/*
This program checks whether the given number is an Armstrong number. An Armstrong number (also called a narcissistic number) 
for a 3-digit number is a number where the sum of the cubes of its digits equals the number itself.
 For example, 153 = 1³ + 5³ + 3³.
*/

#include <iostream>
using namespace std;

int main(){
    int n, r, sum = 0, temp; // temp: Holds the original number for comparison.
    
    cout << "Enter the Number=  ";    
    cin >> n;

    //The variable temp stores the original value of n because n will be modified during the computation.
    temp = n;

    while(n > 0)    {    
    r = n % 10;                // Extract the last digit of n
    sum = sum + (r * r * r);   // Add the cube of the digit to sum
    n = n / 10;                // Remove the last digit from n
    }

    if(temp == sum)
    cout << "Armstrong Number." << endl;
    else
    cout << "Not Armstrong Number." << endl;


    return 0;

}
