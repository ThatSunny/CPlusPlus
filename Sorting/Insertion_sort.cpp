#include<iostream>
using namespace std;

int main(){

    // Declaring an array
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);

    // Traversing the loop until second last element
    for(int i=1; i<=size-1; i++){

        // 1 || Fetching the element
        // Creating a temp variable to avoid overwriting 
        int temp = arr[i];

        // Declaring j outside loop, so can be used by line 42
        int j=i-1; 

        // 2 || Traversing loop for all previous elements till current element
        // Loop goes till ith element || arr[i] or j=0
        for(j; j>=0; j--){

            // 2 || Comparing the elements
            if(arr[j] > temp){

                // 3 || Shifting the element || arr[j+1] == arr[i] location
                arr[j+1] = arr[j];
            }

            // If comparison fails
            else{

                // Breaking the loop
                break;
            }
        }

        // 4 || Copying the element to empty index
        // After 2nd loop, j decreases by 1 || j--
        // But we want to place element at its previous position || j+1  
        arr[j+1] = temp;
        
    }

    // Printing the final array
    for(int i=0; i<=size-1; i++){
        cout << arr[i] << " ";
    }

    return 0;
}