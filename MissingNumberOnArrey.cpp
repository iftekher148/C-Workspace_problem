#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the total numbers (n): ";
    cin >> n;

    int arr[n - 1]; // Array with one number missing
    cout << "Enter " << n - 1 << " numbers: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    // Calculate the expected sum of numbers from 1 to n
    int expectedSum = n * (n + 1) / 2;

    // Calculate the actual sum of the array elements
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    // The missing number
    int missingNumber = expectedSum - actualSum;
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
