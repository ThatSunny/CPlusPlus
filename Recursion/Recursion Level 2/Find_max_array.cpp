// Find the maximum element of an array using recursion

#include <iostream>
#include <climits>
using namespace std;

int maxarr(int arr[], int n, int i, int& max){      // Since we're storing the value in max, We make sure, it is passed by reference and not by value  
    // Base conditon                                // So we can return its true value to the main()
    if(i >= n){
        return max;
    }

    // Processing
    if(arr[i] > max){
        max = arr[i];
    }

    // Recursive Relation
    maxarr(arr, n, i+1, max);
}

int main() {

    // Declaring an array
    int arr[5] = {14, 32, 44, 53, 11};
    int n = 5;
    int i = 0;
    
    // Declaring other variables
    int max = INT_MIN;

    // func() call
    int ans = maxarr(arr, n, i, max);

    // Printing the answer
    cout << "Output: " << max;
}