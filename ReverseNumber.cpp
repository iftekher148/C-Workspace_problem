
// Reverse Number:
// -----------------
// num = 1234
// reversedNumber = 0

// Step 1: Extract the Last Digit
// The modulus operator (%) gives the remainder when num is divided by 10. For any number, this operation returns the last digit.
// 	Calculation: 1234 % 10 = 4

// Step 2: Build the Reversed Number
// Code: reversedNumber = reversedNumber * 10 + lastDigit
// Explanation: The current value of reversedNumber is 0. We multiply reversedNumber by 10 to shift its digits left by one place (although it is currently 0, so this shift doesn't affect the result).
// Then, we add lastDigit (4) to reversedNumber.
// Calculation: 0 * 10 + 4 = 4


// Step 3: Remove the Last Digit from num
// Code: num = num / 10
// Explanation: Dividing num by 10 removes the last digit. In integer division (no remainder), this effectively shifts all digits to the right.
// Calculation: 1234 / 10 = 123
// Result: num = 123


# include<iostream>
using namespace std;

int main(){
    
    int number, reversedNum=0;
    cout<<"Enter Number:";
    cin>>number;

    while (number !=0)
    {
        int lastDigit = number%10;
        reversedNum=reversedNum*10+lastDigit;
        number = number/10;
    } 
    
    cout<< reversedNum;
}