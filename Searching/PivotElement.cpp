// Find the pivot element in a rotated sorted array
#include<iostream>
#include<climits>
using namespace std;

int main(){

    // Declaring the array
    int arr[] = {1, 2, 4, 6, 9, 10};
    int size = sizeof(arr) / sizeof(int);

    // Declaring start, middle and ending index
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    // Declaring other variables
    bool found = false;
    int index = INT_MIN;

    // Loop terminates when start exceeds the value of end
    while(start <= end){

        // 1 | If only one element remain in final subarray
        if(start == end){

            // Storing the index
            found = true;
            index = mid;

            // Breaking the loop
            break;
        }

        // 2 | If arr[mid] > arr[mid + 1]
        if(arr[mid] > arr[mid + 1] && (mid + 1) <= end){

            // Storing the index 
            found = true;
            index = mid;

            // Breaking the loop
            break;
        }

        // 3 | If arr[mid - 1] > arr[mid]
        if(arr[mid - 1] > arr[mid] && (mid - 1) >= start){

            // Storing the index
            found = true;
            index = mid - 1;

            // Breaking the loop
            break;
        }

        // 4 | arr[0] < arr[mid] || We're  on Line A
        if(arr[start] < arr[mid]){

            // Traverse in right
            start = mid + 1;
        }

        // 5 | arr[0] > arr[mid] || We're on Line B
        if(arr[start] > arr[mid]){

            // Traverse in left
            end = mid - 1;
        }

        // Update the value of mid
        mid = start + (end - start) / 2;
    } 

    if(found){
        cout << "Pivot is " << arr[index] << " at " << index <<" index";
    }

    else{
        cout << "Element not found";
    }

    return 0;
}