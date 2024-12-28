
 #include <iostream>
 using namespace std;
 int main(){
    //int arr[] = {1,2,4,5,6};
    // int arraySize = sizeof(arr) / sizeof(arr[0]); //arraySize
    // int n = arraySize+1; // Add 1 to include the missing number
    // //int n =6; //input size

    int n;
    cout << "Enter size of arrey: ";
    cin >> n;


    int arr[n - 1]; // Since one number is missing, array size is n-1
    cout << "Enter number with missing : ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    // Step 1: Calculate the total sum of numbers from 1 to N
    int total = (n*(n+1))/2;

    // Step 2: Calculate the sum of the array elements
    int sum=0;
    for(int i=0;i<n;i++){
       sum=sum+arr[i];
    } 
      
    // Step 3: Find the missing number
    int missingNumber = total-sum;
    cout<<"Missing number is:"<<missingNumber;
 }