#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    
    // 1 || Choosing pivot element
    int pivIndex = s;       // Choosing starting element
    int pivElem = arr[s];   

    // 2 || Find right position for pivot element 
    int count = 0;
    
    // Traversing loop || Starts from `s+1` because we're already at `s` index
    for(int i = s+1; i<=e; i++){

        // Checking if i-th element is less than pivot element
        if(arr[i] <= pivElem){

            // Incrementing count
            count++;
        }
    }
    
    // When 'for' loop exits, we've the correct index for pivot element
    int rightIndex = s + count;         // 's' + count -> because we also have to check for right part of array

    // Swapping the values
    swap(arr[pivIndex], arr[rightIndex]);

    // Updating the pivot index after swapping to right position
    pivIndex = rightIndex;

    // 3 || Checking for all elements less than or greater than pivot element
    int i = s;
    int j = e;

    while( (i < pivIndex) && (j > pivIndex) ){
        
        // Smaller elements on left     
        while( arr[i] <= arr[pivIndex]){        // '<=' because element may be equal to the pivot element (pivIndex)
            i++;
        }

        // Larger elements on right
        while( arr[j] > arr[pivIndex]){
            j--;
        }

        // Two cases exists 
        // 1 || Larger ones at left side and smaller ones in left -> We'd have to swap 
        if( (i < pivIndex) && (j > pivIndex)){
            swap(arr[i], arr[j]);
        }
        
        // 2 || Perfectly ordered -> No need to swap || Keep the code continued
    }
    return pivIndex;
}

void quickSort(int arr[], int s, int e){

    // Base condition
    if(s >= e){         // Single element || Invalid array 
        return;
    }

    // Partition logic  ||  Returns index of pivot element
    int pivIndex = partition(arr, s, e);

    // Recursive logic
    // For left
    quickSort(arr, s, pivIndex-1);

    // For right
    quickSort(arr, pivIndex+1, e);
}

int main(){

    // Declaring an array
    int arr[] = {8, 1, 3, 4, 20, 50, 30, 5};
    int size = sizeof(arr) / sizeof(int);

    // Declaring other variables
    int s = 0;
    int e = size - 1;

    // Calling function
    quickSort(arr, s, e);

    // Printing the array
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}