#include<iostream>
using namespace std;

int main(){

    // Declaring an array
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);

    // Traversing the loop until second last element
    for(int i=0; i<=size-1; i++){

        // Swapped variable checks if the element is swapped or not
        // If no | We don't need to check further
        bool swapped = false;

        // Loop starts from i+1 element and is compared till second last element
        for(int j=0; j<=size-i-1; j++){
            
            // Checking if arr[i] > arr[i+1]
            if(arr[j] > arr[j+1]){

                // If condition true || Elements are swapped
                swapped = true;
                swap(arr[j], arr[j+1]);
            }
        }
        
        // If element doesn't gets swapped
        if(!swapped){
            // The array is sorted | Breaking the loop to avoid unncessary iterations
            break;
        }

    }

    // Printing the final array
    for(int i=0; i<=size-1; i++){
        cout << arr[i] << " ";
    }

    return 0;
}