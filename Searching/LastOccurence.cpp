#include<iostream>
#include<climits>
#include<algorithm>         // To use sort() function
using namespace std;

int main(){
    int arr[]={2, 5, 7, 7, 7, 7, 9, 20, 20};
    int size = sizeof(arr) / sizeof(int);

    // To sort an array
    sort(arr, arr + size);

    // Declaring key and index
    int key = 7;
    int index = INT_MIN;
    bool found = false;

    // Declaring the start, end and mid index
    int start = 0;
    int end   = size - 1;
    int mid = start + (end - start) / 2;

    while(start <= end){

        // Condition 1 | If arr[mid] == key
        if(arr[mid] == key){

            // Storing the index value
            index = mid;
            found = true;

            // Moving the array to right
            start = mid + 1;    
        }

        // Condition 2 | If arr[mid] > key
        else if(arr[mid] > key){

            // Moving the array left
            end = mid - 1;
        }
        
        // Condition 3 | If arr[mid] < key
        else if(arr[mid] < key){

            // Moving the array right
            start = mid + 1;
        }

        // Updating the value of mid
        mid = start + (end - start) / 2;
    }

    if(found){
        cout << "Last occurence is at " << index << " index";
    }
    else{
        cout << "Element not found";
    }
    return 0;
}