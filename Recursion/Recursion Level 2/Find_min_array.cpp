// Find the maximum element of an array using recursion

#include <iostream>
#include <climits>
using namespace std;

int minarr(int arr[], int n, int i, int& mini){      // Since we're storing the value in mini, We make sure, it is passed by reference and not by value  
    // Base conditon                                 // So we can return its true value to the main()
    if(i >= n){
        return mini;
    }

    // Processing
    if(arr[i] < mini){
        mini = arr[i];
    }

    // Recursive Relation
    minarr(arr, n, i+1, mini);
}

int main() {

    // Declaring an array
    int arr[5] = {14, 32, 44, 53, 11};
    int n = 5;
    int i = 0;
    
    // Declaring other variables
    int mini = INT_MAX;

    // func() call
    int ans = minarr(arr, n, i, mini);

    // Printing the answer
    cout << "Output: " << mini;
}