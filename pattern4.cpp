//https://www.youtube.com/watch?v=Fh57B4luL38&list=PLIY8eNdw5tW8TmAF1Xkez1CY7HE4X9KRL&index=3
/*        
        *****
         ****
          ***
           **
            *
*/

# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;

    for(int i=n;i>0;i--){
        //printing spaces
        for(int k=n-i;k>0;k--){
            cout<<" ";
        } 
        //printing stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}