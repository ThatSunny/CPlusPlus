// Performing Binary Search in Nearly Sorted Array

#include<iostream>
using namespace std;

int main(){

    // Declaring the array 
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int size = sizeof(arr) / sizeof(int);

    // Declaring the start, end and middle index
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    // Other variables
    bool found = false;
    int key = 10;
    int index;

    // Loop stops when start exceeds the value of end
    while(start <= end && !found){

        // Condition 1 | If arr[mid] == key
        if(arr[mid] == key){

            // Storing the index value
            found = true;
            index = mid;
        }

        // Condition 1.2 | If arr[mid+1] = key || mid+1 should not exceed array size 
        if(mid+1 < size && arr[mid + 1] == key){

            // Storing the Index 
            found = true; 
            index = mid + 1;
        }

        // Condition 1.3 | If arr[mid - 1] = key || mid-1 should not give negative index
        if(mid-1 >=0 && arr[mid - 1] == key){

            // Storing the Index
            found = true;
            index = mid - 1;
        }

        // Condition 2 | If arr[mid] > key
        if(arr[mid] > key){

            // Moving the array left | mid-2, Because we've already searched for mid-1 element
            end = mid - 2;
        }

        // Condition 3 | If arr[mid] < key
        if(arr[mid] < key){

            // Moving the array right
            start = mid + 2;
        }

        // Updating middle index
        mid = start + (end - start) / 2;
    }

    if(found){
        cout << "Element found at " << index << " index";
    }
    else{
        cout << "Element not found";
    }
    return 0;
}