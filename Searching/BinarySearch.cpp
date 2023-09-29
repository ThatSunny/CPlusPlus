#include<iostream>
using namespace std;

int main(){

    // Declaring an array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 10};
    int size = sizeof(arr)/sizeof(int);


    // Asking user which element to search from the array
    int key;
    cout << "Enter the element to search: "; 
    cin >> key;

    // Declaring starting, ending and mid index
    int start = 0;                            // Start
    int end = size - 1;                       // End
    int mid = start + (end - start) / 2;      // Middle

    // Declaring a bool variable to work with line 49
    bool found = false;

    // Loop | Runs when i <= j
    while(start <= end){
        
        // Condition 1 | IF mid = key
        if(arr[mid] == key){
            found = true;
            break;
        }

        // Condition 2 | If key is smaller than mid | Searching Left
        else if(key < arr[mid]){
            end = mid - 1;
        }
        
        // Condition 3 | If key is greater than mid | Searching Right
        else{
            start = mid + 1;
        }

        // After start and end updates, New mid gets updated
        mid = start + (end - start) / 2;
    }


    // Printing the indexes
    if(found){
        cout << "Element found at index " << mid;
    }

    else{
        cout << "Element not found";
    }

    return 0;
}