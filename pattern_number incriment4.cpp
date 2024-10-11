

//https://www.youtube.com/watch?v=TPNMn7skdAQ&list=PLIY8eNdw5tW8TmAF1Xkez1CY7HE4X9KRL&index=4

/*
        1
       22
      333
     4444
    55555    
*/

# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;

    for(int i=1;i<=n;i++){
        
        //printing spaces
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
         
         //printing number
        for(int j=1;j<=i;j++){
            cout<< i;
        }
          //Move to new line
        cout<<endl;
    }
}