#include<iostream>
#include<climits>
using namespace std;

int main(){

    //Declaring array and its size
    int arr[] = {1, 3, 4, 4, 4, 4, 4, 6, 7};
    int size = sizeof(arr) / sizeof(int);

    // Declaring the key and index
    int key = 6;
    int index = INT_MIN;
    bool found = false;

    // Declaring the start, end and mid index
    int start = 0;
    int end   = size-1;
    int mid = start + (end - start) / 2;

    while(start <= end){

        // 1st Condition | If arr[mid] = key
        if(arr[mid] == key){

            // Storing the index value
            found = true;
            index = mid;    // NOT arr[mid] | Because we need the index, not the element at arr[mid]

            // Moving the array to left
            end = mid - 1;

        }

        // 2nd Condition | If arr[mid] < key
        else if(arr[mid] < key){
            
            // Moving the array to right
            start = mid + 1;
        }

        // 3rd Condition | If arr[mid] > key
        else if(arr[mid] > key){

            // Moving the array to left
            end = mid - 1;
        }

        // Updating the mid index
        mid = start + (end - start) / 2; 
    }

    if(found){      // If occurence is found
        cout << "First occurence is at " << index << " index";
    }
    else{           // If occurence is not found
        cout << "Element not found";
    }

    return 0;
}