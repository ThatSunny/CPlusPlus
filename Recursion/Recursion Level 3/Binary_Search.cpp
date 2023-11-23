// Perform binary search to return the index of the key using Recursion

#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& arr, int& n, int& key, int s, int e){

    // Calculating mid
    int mid = s + (e-s) / 2;

    // Base conditions
    if(s > e){      // Start exceeds the end index
        return -1;
    }

    // Processing
    if(arr[mid] == key){
        return mid;
    }

    // Recursive Relations
    // For right search
    if(arr[mid] < key){
        return binarysearch(arr, n, key, mid+1, e);
    }

    // For left search
    if(arr[mid] > key){
        return binarysearch(arr, n, key, s, mid-1);
    }
}

int main(){

    // Declare a vector
    vector<int> arr{10, 24, 31, 77, 82, 99};
    int size = arr.size();

    // Declaring other variables
    int key = 82 ;
    int s = 0;
    int e = size-1;

    // Calling function
    int ans = binarysearch(arr, size, key, s, e);

    // Printing answer
    if(ans == -1){
        cout << "Element not present" << endl;
    } else{
        cout << "Element at index: " << ans;
    }
}