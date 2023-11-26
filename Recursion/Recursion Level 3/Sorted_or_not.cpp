// You're given an array, check if the array is sorted using Recursion

#include<iostream>
using namespace std;

bool isSorted(int arr[], int& n, int i){

    // Base condition
    if(i == n-1){
        return true;
    }

    // Processing
    if(arr[i] > arr[i+1]){
        return false;
    }

    // Recursive Relation
    isSorted(arr, n, i+1);
}


int main(){
    // Declaring an array
    int arr[5] = {4, 10, 32, 55, 74};

    // Declaring other variables
    int size = sizeof(arr) / sizeof(int);
    int i = 0;

    // Calling function
    bool ans = isSorted(arr, size, i);

    // Printing the answer
    if(ans){
        cout << "YES";
    } else {
        cout << "NO";
    }

}