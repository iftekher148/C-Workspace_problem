// Given text string with length n and a pattern with length m, the task is to prints all occurrences of pattern in text.
// Note: You may assume that n > m.

// Examples: 

// Input:  text = “THIS IS A TEST TEXT”, pattern = “TEST”
// Output: Pattern found at index 10



// Input:  text =  “AABAACAADAABAABA”, pattern = “AABA”
// Output: Pattern found at index 0, Pattern found at index 9, Pattern found at index 12


#include <iostream>
#include <string>
using namespace std;

int main() {
   string text,patt;
   int i,j;

   cout<<"Enter String of TEXT:";
   getline(cin,text);
   cout<<"Enter Pattern:";
   getline(cin,patt);

   //Find out length of text & Pattern
   int text_length=text.length();
   int patt_length=patt.length();

   //Find out MAX_index.Ai index pojonto "Text" character search korbe...
   int max_index = text_length-patt_length+1;
   bool found=false;

    //Outter loop used for "Text". It will goes to max_index.
   for(i=0;i<max_index;i++){
        for(j=0; j<patt_length;j++){  //inner loop used for "Pattern string search". It goes to Patter_length
            if(text[i+j] != patt[j])
                    break;            //Inner loop. text & pattern ar character mis-match hole break kore outter loop jabe.
        }
        //Outter loop condition...
        if(j==patt_length){
            cout<<"Pattern found at index:"<<i<<endl;
            found=true;
        }
     
    }
    if (!found) {
       cout << "Pattern not found in text." << endl;
   }
}
