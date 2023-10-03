#include<iostream>
using namespace std;

int main(){

    // Declaring an array
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);

    // Traversing the loop until second last element
    for(int i=0; i<=size-1; i++){

        // Loop starts from i+1 element and is compared till last element
        for(int j=i+1; j<size; j++){
            
            // Checking if arr[i] > arr[i+1]
            if(arr[i] > arr[j]){

                // If condition true || Elements are swapped
                swap(arr[i], arr[j]);
            }
        }
    }

    // Printing the final array
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}